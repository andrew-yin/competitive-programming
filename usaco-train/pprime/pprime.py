"""
ID: andrew8
LANG: PYTHON3
TASK: pprime
"""
import sys
import math

def main():
    with open("pprime.in", 'r') as sys.stdin:
        a, b = tuple(map(int, sys.stdin.readline().split()))

    sys.stdout = open("pprime.out", 'w')

    def solve(a,b):
        def isPrime(n):
            if n == 1 or n == 4 or n == 6 or n == 8 or n == 9:
                return False
            elif n == 2 or n == 3 or n == 5 or n == 7:
                return True
            else:
                sqroot = int(math.sqrt(n))
                for i in range(2, sqroot+1):
                    if n % i == 0:
                        return False
                return True

        i = a
        n = 1
        lessThanb = True
        while lessThanb:
            if n % 2 == 0:
                for i in range(10**(n//2-1), 10**(n//2)):
                    c = str(i)
                    i = int(c+c[::-1])
                    if i < a:
                        continue
                    elif i > b:
                        lessThanb = False
                        break
                    else:
                        if isPrime(i):
                            sys.stdout.write(str(i) + "\n")
            else:
                for i in range(10**(n//2), 10**(n//2+1)):
                    c = str(i)
                    i = int(c[:-1]+c[::-1])
                    if i < a:
                        continue
                    elif i > b:
                        lessThanb = False
                        break
                    else:
                        if isPrime(i):
                            sys.stdout.write(str(i) + "\n")
            n += 1

    solve(a,b)

if __name__ == "__main__":
    main()