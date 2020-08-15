"""
ID: andrewy8
LANG: PYTHON3
TASK: beads
"""

with open("beads.in", "r") as fin:
    n = int(fin.readline())
    beads = fin.readline().strip()

beads += beads
maxim = 0

for i in range(n):
    color = ""
    count = 0
    broke = beads[i:n+i]
    for j in broke:
        if j != "w":
            if color == "":
                color = j
            elif j != color:
                break
        count += 1
    color = ""
    for j in broke[::-1]:
        if j != "w":
            if color == "":
                color = j
            elif j != color:
                break
        count += 1
    if count > maxim:
        maxim = count

if maxim > n: #edge case scenario
    maxim = n


with open("beads.out", "w") as fout:
    fout.write(str(maxim) + "\n")
