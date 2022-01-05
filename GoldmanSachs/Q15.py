class Solution:
    def canPair(self, nums, k):
        # Code here
        a = [0]*k
        for i in nums:
            a [i%k] +=1
        if (a[0] % 2 != 0):
            return False
        else:
            if (k%2 == 0) and a[k//2] % 2 != 0:
                return False
            else:
                for j in range (1, k//2+1):
                    if (a[j] != a[k-j]):
                        return False
                return True
              
              
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n, k = input().split()
        n = int(n)
        k = int(k)
        nums = list(map(int, input().split()))
        ob = Solution()
        ans = ob.canPair(nums, k)
        if(ans):
            print("True")
        else:
            print("False")
# } Driver Code Ends
