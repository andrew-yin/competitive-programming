"""
ID: andrew8
LANG: PYTHON3
TASK: sprime
"""
import sys
import math

def main():

    sprimes = []
    a = 0

    def isPrime(n):
        if n == 1 or n == 4 or n == 6 or n == 8 or n == 9 or n == 10 or n == 12 or n == 14 or n == 15 or n == 16 or n == 18 or n == 20:
            return False
        elif n == 2 or n == 3 or n == 5 or n == 7 or n == 11 or n == 13 or n == 17 or n == 19:
            return True
        else:
            for i in range(2, int(math.sqrt(n))+1):
                if n % i == 0:
                    return False
            return True

    with open("sprime.in", 'r') as sys.stdin:
        n = int(sys.stdin.read())

    sys.stdout = open("sprime.out", 'w')

    def solve(count,a):
        if count == n:
            for i in {2,3,5,7}:
                a = i
                solve(count-1,a)
        elif count == 1:
            for i in {1,3,5,7,9}:
                temp_num = a*10 + i
                if isPrime(temp_num):
                    sys.stdout.write(str(temp_num) + "\n")
        else:
            for i in {1,3,5,7,9}:
                temp_num = a*10 + i
                if isPrime(temp_num):
                    a = temp_num
                    solve(count - 1,a)
                    a = (temp_num - i)//10
    
    solve(n,a)
    sys.stdout.close()

if __name__ == "__main__":
    main()