n = input()
arr = []
y=int(n)
int(x)
while y>0:
    x = input()
    arr.append(x)
    y-=1
dict_a = {}
mini  = 10000
pos1 = -1
pos2 = -1
for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        if abs(arr[i]-arr[j])< mini:
            mini = abs(arr[i]-arr[j])
            pos1 = i
            pos2 = j


print(str(pos1)+" "+str(pos2))