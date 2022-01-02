#Your task is to complete this function
#Function should return complete string
from collections import OrderedDict
def encode(arr):
    # Code here
    comp= []
    count = 1
    c = arr[0]
    for i in range(1,len(arr)):
        if arr[i] == c:
            count = count + 1
        else :
            comp.append([c,count])
            c = arr[i]
            count = 1
    comp.append([c,count])
    s = ''
 
    for i in range(0,len(comp)):
        for j in comp[i]:
            s += str(j)
    return s

#{ 
#  Driver Code Starts
#Your code will prepended here
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        arr=input().strip()
        print (encode(arr))
# } Driver Code Ends
