"""
ID: andrew8
LANG: PYTHON3
TASK: numtri
"""
import sys

def main():
    graph = dict()
    with open("numtri.in", 'r') as sys.stdin:
        n = int(sys.stdin.readline())
        triangle = [[int(j) for j in i.split()] for i in sys.stdin.readlines()]
    
    total = 0
    row = 0
    element = 0
    def solve():
        for i in range(n-2, -1, -1):
            for j in range(len(triangle[i])):
                if triangle[i+1][j] > triangle[i+1][j+1]:
                    triangle[i][j] += triangle[i+1][j]
                else:
                    triangle[i][j] += triangle[i+1][j+1]
    solve()
    
    with open("numtri.out", 'w') as sys.stdout:
        sys.stdout.write(str(triangle[0][0]) + "\n")

if __name__ == "__main__":
    main()