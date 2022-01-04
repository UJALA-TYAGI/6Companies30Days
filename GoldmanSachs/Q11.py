
class Solution:
    def findTwoElement( self,arr, n):
        m = [0]*100000
        ans = [0,0]
        for i in arr:
            m[i]-=1
        
        for j in range(1, n+1):
            if m[j]==0:
                ans[1] = j
                break
        for j in m:
            if j==-2:
                ans[0] = m.index(j)
                break        
        # arr.sort()
        # l = arr[-1]
        # ans = [0,0]
        # for i in range(1,l+1):
        #     if i not in arr:
        #         ans[1] = i
        #         break
        # if ans[1] == 0:
        #     ans[1] = l+1
            
        # a = Counter(arr)
        # for k,v in a.items():
        #     if v>1:
        #         ans[0] = k
        return ans

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends
