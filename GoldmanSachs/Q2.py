#User function Template for python3

class Solution:
    
    def doOverlap(self, l1, r1, l2, r2):
        #code here
        if (r1[0] < l2[0]) or (l1[0] > r2[0]) or (l1[1] < r2[1]) or (r1[1] > l2[1]):
            return 0
        else:
            return 1

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        p=[0]*2
        q=[0]*2
        r=[0]*2
        s=[0]*2
        p[0],p[1],q[0],q[1],r[0],r[1],s[0],s[1]=map(int,input().strip().split(" "))
        ob=Solution()
        ans=ob.doOverlap(p,q,r,s)
        print(ans)
# } Driver Code Ends
