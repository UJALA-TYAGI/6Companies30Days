#User function Template for python3

class Solution:
    def colName (self, n):
        # your code here
        result = ""
 
        while n > 0:
 
        # find the index of the next letter and concatenate the letter
        # to the solution
 
        # here index 0 corresponds to `A`, and 25 corresponds to `Z`
            index = (n - 1) % 26
            result += chr(index + ord('A'))
            n = (n - 1) // 26
 
        return result[::-1]

#{ 
#  Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    n = int (input ())
    ob = Solution()
    print (ob.colName (n))
    

# } Driver Code Ends
