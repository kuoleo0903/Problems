import sys

open_quote = True

for line in sys.stdin:
    new_line = []
    for ch in line:
        if ch == '"':
            if open_quote:
                new_line.append('``')
            else:
                new_line.append("''")
            open_quote = not open_quote
        else:
            new_line.append(ch)
    sys.stdout.write(''.join(new_line))
