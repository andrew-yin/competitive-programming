"""
ID: andrew8
LANG: PYTHON3
TASK: ariprog
"""
import sys

def main():

    with open("ariprog.in", 'r') as sys.stdin:
        n = int(sys.stdin.readline())
        m = int(sys.stdin.readline())

    bs = set()
    solns = []
    
    for i in range(m+1):
        for j in range(m+1):
            bs.add(i*i+j*j)

    for a in bs:
        term = a
        for b in range(1, (2*m*m-a)//(n-1) + 1):
            for i in range(n-1):
                term += b
                if term not in bs:
                    break
            else:
                solns.append((a,b))
            term = a
            
    solns.sort(key = lambda x: x[1])

    with open("ariprog.out", 'w') as sys.stdout:
        if len(solns) > 0:
            for i in solns:
                sys.stdout.write(str(i[0]) + " " + str(i[1]) + "\n")
        else:
            sys.stdout.write("NONE\n")

if __name__ == "__main__":
    main()