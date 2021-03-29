def isDiv(num):
    for i in range(20,0, -1):
        if num%i!=0:
            return False
    return True
curNum=1
prevNum=0
while True:
    if isDiv(curNum):
        break
    curNum+=1
print(curNum)
