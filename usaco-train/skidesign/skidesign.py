"""
ID: andrew8
LANG: PYTHON3
TASK: skidesign
"""
import sys

def solve(n, hills):
    cost = 0
    for i in range(hills[0], hills[-1] - 16):
        thisCost = 0
        mini = i
        maxi = i+17
        for j in hills:
            if j < i:
                thisCost += (i - j)**2
            elif j > i+17:
                thisCost += (i + 17 - j)**2
        
        if i == hills[0]:
            cost = thisCost
        else:
            if thisCost < cost:
                cost = thisCost
    
    return cost


def main():
    with open("skidesign.in", 'r') as sys.stdin:
        n = int(sys.stdin.readline())
        hills = [0]*n
        for i in range(n):
            hills[i] = int(sys.stdin.readline())
    
    hills.sort()
    ans = solve(n, hills)

    with open("skidesign.out", 'w') as sys.stdout:
        sys.stdout.write(str(ans) + "\n")


if __name__ == "__main__":
    main()