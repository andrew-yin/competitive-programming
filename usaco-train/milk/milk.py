"""
ID: andrew8
LANG: PYTHON3
TASK: milk
"""
import sys

def main():
    with open("milk.in", 'r') as sys.stdin:
        units, n = tuple(map(int, sys.stdin.readline().split()))
        farmers = []
        for i in range(n):
            farmers.append(tuple(map(int, sys.stdin.readline().split())))
        farmers.sort(key = lambda x: x[0])
        print(farmers)

    cost = 0
    idx = 0
    while units > 0:
        farm = farmers[idx]
        cpu = farm[0]
        num = farm[1]

        if num <= units:
            cost += num*cpu
            units -= num
        else:
            cost += cpu*units
            units -= units
        idx += 1
    
    with open("milk.out", 'w') as sys.stdout:
        sys.stdout.write(str(cost) + "\n")



if __name__ == "__main__":
    main()