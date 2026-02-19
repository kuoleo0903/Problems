#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int l = 0, r = 0, b = 0;
    int curX = 0, curY = 0; // 當前位置
    int p = 1, q = 0;        // 初始方向向量：向右 (1, 0)

    for (int i = 0; i < n; i++) {
        int nextX, nextY;
        cin >> nextX >> nextY;

        // 計算當前的移動向量 (vx, vy)
        int vx = nextX - curX;
        int vy = nextY - curY;

        // 外積判斷左右轉： p*vy - q*vx
        long long cross_product = (long long)p * vy - (long long)q * vx;
        
        if (cross_product > 0) l++; // 左轉
        else if (cross_product < 0) r++; // 右轉
        else {
            // 如果外積為0，表示在同一直線上。利用內積判斷是否為「迴轉」
            // 內積： p*vx + q*vy
            long long dot_product = (long long)p * vx + (long long)q * vy;
            if (dot_product < 0) b++; // 迴轉 (方向相反)
        }

        // 更新當前座標與「上一次向量」
        curX = nextX;
        curY = nextY;
        p = vx;
        q = vy;
    }

    cout << l << " " << r << " " << b << endl;

    return 0;
}