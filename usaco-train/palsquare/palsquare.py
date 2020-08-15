"""
ID: andrew8
LANG: PYTHON3
TASK: palsquare
"""
import sys

def isPalindrome(n):
    return n == n[::-1]

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
                10:'A',
                11:'B',
                12:'C',
                13:'D',
                14:'E',
                15:'F',
                16:'G',
                17:'H',
                18:'I',
                19:'J'
              }
    output = ''
    while n > 0:
        rem = n % b
        output = str(letters[rem]) + output
        n = n // b
    return output


def main():
    with open("palsquare.in", 'r') as sys.stdin:
        b = int(sys.stdin.readline())
    
    with open("palsquare.out", 'w') as sys.stdout:
        for n in range(1,301):
            n_square = n*n
            n_square_b = toBaseX(n_square, b)
            if isPalindrome(n_square_b):
                n_b = toBaseX(n, b)
                sys.stdout.write(n_b + " " + n_square_b + "\n")

if __name__ == "__main__":
    main()
