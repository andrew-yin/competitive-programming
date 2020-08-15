"""
ID: andrew8
LANG: PYTHON3
TASK: wormhole
"""
from sys import stdin as fin
from sys import stdout as fout






def main():

    with open("wormhole.in", 'r') as fin:
        n = int(fin.readline())
        x = [0]*(n+1)
        y = [0]*(n+1)
        for i in range(1,n+1):
            x[i], y[i] = tuple(map(int, fin.readline().split()))

    partner = [0]*(n+1)
    on_right = [0]*(n+1)

    for i in range(1,n+1):
        for j in range(1,n+1):
            if x[j] > x[i] and y[i] == y[j]:
                if on_right[i] == 0 or x[j] - x[i] < x[on_right[i]] - x[i]:
                    on_right[i] = j

    def cycle():
        for i in range(1,n+1):
            pos = i
            for j in range(n):
                pos = on_right[partner[pos]]
        
            if pos != 0:
                return True
        
        return False

    def solve():
        total = 0
        i = 1

        for i in range(1,n+1):
            if partner[i] == 0:
                break
        else:
            if cycle():
                return 1
            else:
                return 0

        for j in range(i+1, n+1):
            if partner[j] == 0:
                partner[i] = j
                partner[j] = i
                total += solve()
                partner[i] = 0
                partner[j] = 0

        return total


    
    ans = solve()
    
    with open("wormhole.out", 'w') as fout:
        fout.write(str(ans) + "\n")


if __name__ == "__main__":
    main()