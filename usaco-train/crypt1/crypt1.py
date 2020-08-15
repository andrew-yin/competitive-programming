"""
ID: andrew8
LANG: PYTHON3
TASK: crypt1
"""
import sys
import itertools

def ppWork(pp, digits):
    n = str(pp)
    for i in n:
        if int(i) not in digits:
            return False
    if 0 in digits:
        return len(n) == 3 or len(n) == 2
    else:
        return len(n) == 3

def productWork(product, digits):
    n = str(product)
    for i in n:
        if int(i) not in digits:
            return False
    if 0 in digits:
        return len(n) == 4 or len(n) == 3
    else:
        return len(n) == 4

def solve(digits):
    count = 0
    for product in itertools.product(digits, repeat = 5):
        digit1 = 100*product[0]+10*product[1]+product[2]
        digit2 = 10*product[3]+product[4]
        pp1 = digit1 * product[4]
        if not ppWork(pp1, digits):
            continue
        pp2 = digit1 * product[3]
        if not ppWork(pp2, digits):
            continue
        result = digit1*digit2
        if not productWork(result, digits):
            continue
        count += 1
    return count
        

def main():
    with open("crypt1.in", 'r') as sys.stdin:
        n = int(sys.stdin.readline());
        digits = set(map(int, sys.stdin.readline().split()))
    
    ans = solve(digits)

    with open("crypt1.out", 'w') as sys.stdin:
        sys.stdin.write(str(ans) + "\n")

if __name__ == "__main__":
    main()