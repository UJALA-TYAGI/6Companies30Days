#User function Template for python3

class Solution:
    def maxProfit(self, k, N, p):
        if N == 0:
            return 0

        states = [0] + [-float('inf') for i in range(2*k)]
        states[1] = -p[0]
 
        for i in range(1, N):
            for j in range(k):
                states[2*j+1] = max(states[2*j+1], states[2*j]-p[i])
                states[2*j+2] =   max(states[2*j+2], states[2*j+1]+p[i])
        
        return max(0, states[-1])

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        K = int(input())
        N = int(input())
        A = input().split()
        for i in range(N):
            A[i] = int(A[i])
        
        ob = Solution()
        print(ob.maxProfit(K, N, A))
# } Driver Code Ends
