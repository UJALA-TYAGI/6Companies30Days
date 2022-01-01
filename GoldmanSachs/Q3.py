
class Solution:
    def countSubArrayProductLessThanK(self, a, n, k):
        #Code here
        count =0
        start = 0
        end = 1
        prod = a[0]
        while (start<=end and end<=n):
            if (prod<k):
                count += (end - start)
                if end<n:
                    prod*=a[end]
                end+=1
            else:
                prod/= a[start]
                start+=1
        return count
      
 
#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n, k = [int(x) for x in input().strip().split()]
        arr = [int(x) for x in input().strip().split()]
        
        print(Solution().countSubArrayProductLessThanK(arr, n, k))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends
