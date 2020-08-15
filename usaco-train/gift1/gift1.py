"""
ID: andrewy8
LANG: PYTHON3
TASK: gift1
"""

with open("gift1.in", 'r') as fin:
    lines = fin.read().splitlines()

np = int(lines[0])
names = dict()
transactions = []

for name in lines[1:np+1]:
    names[name] = 0

for i in range(0,len(lines)):
    a = lines[i].split();
    if len(a) == 2:
        b = int(a[1])
        transactions.append(lines[i-1: i + b + 1])
    
for transaction in transactions:
    name = transaction[0]
    
    money_people = transaction[1].split()
    money = int(money_people[0])
    people = int(money_people[1])
    
    if people > 0:
        money_per = money//people
        leftover = money % people
    else:
        money_per = 0
        leftover = money
    
    for i in transaction[2:]:
        names[i] += money_per
    
    names[name] += leftover - money

with open("gift1.out", 'w') as fout:
    for i in names.keys():
        fout.write(i + " " + str(names[i]) + "\n")