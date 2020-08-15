"""
ID: andrew8
LANG: PYTHON3
TASK: barn1
"""
import sys

def main():

    with open("barn1.in", 'r') as sys.stdin:
        m, s, c = tuple(map(int, sys.stdin.readline().split()))
        stalls = [None]*c
        for i in range(c):
            stalls[i] = int(sys.stdin.readline().strip())         
    stalls.sort()

    blocked = stalls[-1] - stalls[0] + 1 
    
    gaps = []
    for i in range(len(stalls) - 1):
        gap_pot = stalls[i+1] - stalls[i]

        if gap_pot > 1:
            gaps.append(gap_pot - 1)
    
    gaps.sort(reverse = True)
    idx = 0
    for i in range(m-1):
        if idx < len(gaps):
            blocked -= gaps[idx]
            idx += 1
        else:
            break
    
    with open("barn1.out", 'w') as sys.stdout:
        sys.stdout.write(str(blocked) + "\n")


if __name__ == "__main__":
    main()