def isPalindrome(number):
    strNum = str(number)
    reverseStr = strNum[::-1]
    if strNum==reverseStr:
        return True
    else:
        return False
    
largest=0
for i in range(100,1000):
    for j in range(100,1000):
        curNum = i*j
        if isPalindrome(curNum) and curNum>largest:
            largest=curNum

print(largest)