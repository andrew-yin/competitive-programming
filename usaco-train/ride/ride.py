"""
ID: andrewy8
LANG: PYTHON3
TASK: ride
"""
fin = open("ride.in", 'r')
fout = open("ride.out",'w')
lines = fin.read().splitlines()

comet = lines[0]
group = lines[1]

al = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
cometNum = 1
groupNum = 1
for i in comet:
    cometNum *= al.index(i) + 1
for j in group:
    groupNum *= al.index(j) + 1

if (cometNum % 47) == (groupNum % 47):
    fout.write('GO\n')
    fout.close()
else:
    fout.write('STAY\n')
    fout.close()

