"""
ID: andrew8
LANG: PYTHON3
TASK: transform
"""
import sys

def rotate(arr, n):
    rotated_arr = [[None] * len(i) for i in arr]
    for i in range(n):
        for j in range(len(arr[i])):
            rotated_arr[j][n-1-i] = arr[i][j]
    return rotated_arr
        
def reflection(arr, n):
    reflected_arr = [[None] * len(i) for i in arr]
    for i in range(n):
        for j in range(len(arr[i])):
            reflected_arr[i][n-1-j] = arr[i][j]
    return reflected_arr
    
def main():
    
    with open("transform.in", 'r') as sys.stdin:
        n = int(sys.stdin.readline())
        arr1 = []
        arr2 = []
        for i in range(n):
            arr1.append(list(sys.stdin.readline().strip()))
            
        for i in range(n):
            arr2.append(list(sys.stdin.readline().strip()))
    print(arr1)
    print(arr2)
    if rotate(arr1, n) == arr2:
        ans = 1
    elif rotate(rotate(arr1, n), n) == arr2:
        ans = 2
    elif rotate(rotate(rotate(arr1, n), n), n) == arr2:
        ans = 3
    elif reflection(arr1, n) == arr2:
        ans = 4
    elif rotate(reflection(arr1, n), n) == arr2 or rotate(rotate(reflection(arr1, n), n), n) == arr2 or rotate(rotate(rotate(reflection(arr1, n), n), n), n) == arr2:
        ans = 5
    elif arr1 == arr2:
        ans = 6
    else:
        ans = 7
    
    with open("transform.out", 'w') as sys.stdout:
        sys.stdout.write(str(ans) + "\n")

if __name__ == "__main__":
    main()