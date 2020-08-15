"""
ID: andrew8
LANG: PYTHON3
TASK: dualpal
"""
import sys

def isPalindrome(n):
    n_str = str(n)
    return n_str == n_str[::-1]

def toBaseX(n, b):
    letters = { 
                0:'0',
                1:'1',
                2:'2',
                3:'3',
                4:'4',
                5:'5',
                6:'6',
                7:'7',
                8:'8',
                9:'9',
              }
    output = ''
    while n > 0:
        rem = n % b
        output = str(letters[rem]) + output
        n = n // b
    return int(output)

def main():
    with open("dualpal.in", 'r') as sys.stdin:
        n, s = tuple(map(int, sys.stdin.read().split()))
    
    with open("dualpal.out", 'w') as sys.stdout:
        s += 1
        count1 = 0

        while count1 < n:
            count2 = 0
            if isPalindrome(s):
                count2 += 1
            
            for i in range(2, 10):
                s_in_base = toBaseX(s, i)
                if isPalindrome(s_in_base):
                    count2 += 1
                if count2 == 2:
                    count1 += 1
                    sys.stdout.write(str(s) + "\n")
                    break
            s += 1




if __name__ == "__main__":
    main()




