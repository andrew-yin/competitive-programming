"""
ID: andrewy8
LANG: PYTHON3
TASK: friday
"""
import sys
"""
0 1 2 3 4 5 6
S S M T W T F

0 1 2 3 4 5 6 7 8 9 10 11
J F M A M J J A S O N  D
"""

def get_thirteenth(start):
    return (start-2) % 7

def is_leap_year(year):
    if year % 100 == 0:
        return year % 400 == 0
    else:
        return year % 4 == 0

thirtyones = [0, 2, 4, 6, 7, 9, 11]
thirties = [3, 5, 8, 10]
feb = 1
counts = [0, 0, 0, 0, 0, 0, 0]

start = 2

with open("friday.in" , 'r') as sys.stdin:
    n = int(sys.stdin.readline())

for i in range(1900, 1900+n):
    if is_leap_year(i):
        for j in range(12):
            thirteen = get_thirteenth(start)
            counts[thirteen] += 1
            if j in thirtyones:
                start = (start + 3) % 7
            elif j in thirties:
                start = (start + 2) % 7
            else:
                start = (start + 1) % 7
    else:
        for j in range(12):
            thirteen = get_thirteenth(start)
            counts[thirteen] += 1
            if j in thirtyones:
                start = (start + 3) % 7
            elif j in thirties:
                start = (start + 2) % 7
            else:
                pass

with open("friday.out", 'w') as sys.stdout:
    sys.stdout.write(" ".join([str(i) for i in counts]) + "\n")
