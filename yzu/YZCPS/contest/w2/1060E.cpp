#include <iostream>
#include <vector>

using namespace std;

// 由於 n 最大為 200,000，點對距離總和會超過 32-bit 整數範圍，
// 因此相關變數必須使用 long long 型態。
int n;
vector<vector<int>> adj;
vector<int> sz; // 記錄以每個點為根的子樹大小 (Subtree size)

long long sum_dT = 0;   // 原樹上所有點對的距離總和
long long cnt_odd = 0;  // 位於奇數層的節點數量
long long cnt_even = 0; // 位於偶數層的節點數量

/**
 * 樹狀 DFS 遍歷
 * @param u 當前節點
 * @param p 當前節點的父節點 (避免走回頭路)
 * @param depth 當前節點在樹中的深度 (根節點深度設為 0)
 */
void dfs(int u, int p, int depth) {
    sz[u] = 1; // 包含點 u 本身

    // 1. 統計奇偶層節點數
    if (depth % 2 == 1) {
        cnt_odd++;
    } else {
        cnt_even++;
    }

    // 遍歷所有相鄰節點
    for (int v : adj[u]) {
        if (v == p) continue; // 跳過父節點

        dfs(v, u, depth + 1);

        // 2. 累加子樹大小
        sz[u] += sz[v];

        // 3. 計算邊 (u, v) 的貢獻度：
        // 切斷邊 (u, v) 後，樹分成兩半，大小分別為 sz[v] 與 (n - sz[v])。
        // 這條邊會被經過 sz[v] * (n - sz[v]) 次。
        sum_dT += 1LL * sz[v] * (n - sz[v]);
    }
}

int main() {
    // 優化 C++ 輸入輸出效能
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n)) return 0;

    adj.resize(n + 1);
    sz.resize(n + 1);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // 以節點 1 為根節點開始 DFS，深度設為 0
    dfs(1, 0, 0);

    // 奇數距離點對數量 = 奇數層點數 * 偶數層點數
    long long odd_pairs = cnt_odd * cnt_even;

    // 最終公式：(原樹總距離 + 奇數距離點對數) / 2
    long long ans = (sum_dT + odd_pairs) / 2;

    cout << ans << "\n";

    return 0;
}