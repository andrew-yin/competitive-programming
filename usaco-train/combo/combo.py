"""
ID: andrew8
LANG: PYTHON3
TASK: combo
"""
import sys

def main():
    with open("combo.in", 'r') as sys.stdin:
        n = int(sys.stdin.readline())
        comboFJ = tuple(map(int, sys.stdin.readline().split()))
        comboM = tuple(map(int, sys.stdin.readline().split()))

    rangesFJ = []
    rangesM = []

    for i in range(3):
        rangeI_FJ = []
        rangeI_M = []

        for j in range(-2, 3):
            num1 = (comboFJ[i] + j) % n if (comboFJ[i] + j) % n != 0 else n
            num2 = (comboM[i] + j) % n if (comboM[i] + j) % n != 0 else n

            
            rangeI_FJ.append(num1)
            rangeI_M.append(num2)
            
        rangesFJ.append(set(rangeI_FJ))
        rangesM.append(set(rangeI_M))

    x1 = 1
    x2 = 1
    x3 = 1
    for i in range(3):
        x1 *= len(rangesFJ[i])
        x2 *= len(rangesM[i])
        x3 *= len(rangesFJ[i].intersection(rangesM[i]))

    with open("combo.out", 'w') as sys.stdout:
        sys.stdout.write(str(x1 + x2 - x3) + "\n")
    


if __name__ == "__main__":
    main()