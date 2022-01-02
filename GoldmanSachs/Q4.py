#User function Template for python3
class Solution:
    def getNthUglyNo(self,n):
        # code here
        ugly = [0] * n
        ugly[0] = 1
     
        i2 = i3 = i5 = 0
     
        mul_of_2 = 2
        mul_of_3 = 3
        mul_of_5 = 5

        for i in range(1, n):
            
            ugly[i] = min(mul_of_2, mul_of_3, mul_of_5)
     
            if ugly[i] == mul_of_2:
                i2 += 1
                mul_of_2 = ugly[i2] * 2
     
            if ugly[i] == mul_of_3:
                i3 += 1
                mul_of_3 = ugly[i3] * 3
     
            if ugly[i] == mul_of_5:
                i5 += 1
                mul_of_5 = ugly[i5] * 5
     
        return ugly[-1]

#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        ob = Solution()
        ans = ob.getNthUglyNo(n);
        print(ans)
        tc -= 1

# } Driver Code Ends
