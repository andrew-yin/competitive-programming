"""
ID: andrew8
LANG: PYTHON3
TASK: namenum
"""
import itertools
import sys


def main():

    with open('namenum.in', 'r') as sys.stdin:
        n = sys.stdin.read().strip()
        
    with open("dict.txt", 'r') as sys.stdin:
        wordlist = sys.stdin.read().splitlines()

    with open('namenum.out', 'w') as sys.stdout:
        count = 0
        keypad = {'2': ['A','B','C'], 
                    '3': ['D','E','F'], 
                    '4': ['G','H','I'],
                    '5': ['J','K','L'],
                    '6': ['M','N','O'],
                    '7': ['P','R','S'],
                    '8': ['T','U','V'],
                    '9': ['W','X','Y']}

        for i in wordlist:

            if len(i) == len(n):
                isWord = True
                for j, k in zip(list(i), list(n)):
                    if j not in keypad[k]:
                        isWord = False
                
                if isWord:
                    sys.stdout.write(i + "\n")
                    count += 1
        
        if count == 0:
            sys.stdout.write("NONE\n")
                

if __name__ == "__main__":
    main()