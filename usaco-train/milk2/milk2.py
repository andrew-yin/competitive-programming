"""
ID: andrew8
LANG: PYTHON3
TASK: milk2
"""
import sys

def main():
    milks = []
    with open("milk2.in", 'r') as sys.stdin:
        n = int(sys.stdin.readline())
        for i in range(n):
            milks.append(list(map(int, sys.stdin.readline().split())))
    
    milks.sort(key = lambda x: x[0])
    
    merged_milks = []
    for i in range(n):
        merged = False

        j = 0   
        while not merged and j < len(merged_milks):
            
            if milks[i][0] >= merged_milks[j][0] and milks[i][0] <= merged_milks[j][1]:
                
                if milks[i][1] > merged_milks[j][1]:
                    merged_milks[j][1] = milks[i][1]
                    merged = True
                else:
                    merged = True
                    
            elif milks[i][0] <= merged_milks[j][0]:
                
                if milks[i][1] >= merged_milks[j][0] and milks[i][1] < merged_milks[j][1]:
                    merged_milks[j][0] = milks[i][0]
                    merged = True
                else:
                    merged_milks[j][0] = milks[i][0]
                    merged_milks[j][1] = milks[i][1]
                    merged = True
            else:
                j += 1
                  
        if not merged:
            merged_milks.append(milks[i])
            
    max_not_milk = 0
    for i in range(len(merged_milks)-1):
        diff = merged_milks[i+1][0] - merged_milks[i][1]
        if diff > max_not_milk:
            max_not_milk = diff
    
    max_milk_list = max(merged_milks, key = lambda x: x[1] - x[0])
    max_milk = max_milk_list[1] - max_milk_list[0]
    
    with open("milk2.out", 'w') as sys.stdout:
        sys.stdout.write(str(max_milk) + " " + str(max_not_milk) + "\n")
        
if __name__ == "__main__":
    main()




