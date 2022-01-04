class Solution:
    def squaresInChessBoard(self, n):
        # code here
        total = (n*(n+1)*(2*n +1))//6
         
        return total
            
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.squaresInChessBoard(N))
# } Driver Code Ends
