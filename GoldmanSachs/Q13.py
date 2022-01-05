#User function Template for python3

class Solution:
    def decodedString(self, s):
        # code here
        st = []
        for i in range(len(s)):
          
            # When ']' is encountered, we need to start decoding
            if s[i] == ']':
                temp = ""
                while len(st) > 0 and st[-1] != '[':

                    temp = st[-1] + temp
                    st.pop()
                 
                # remove the '[' from the stack
                st.pop()
                num = ""
                 
                # remove the digits from the stack
                while len(st) > 0 and st[-1].isnumeric():
                    num = st[-1] + num
                    st.pop()
                number = int(num)
                repeat = ""
                for j in range(number):
                    repeat += temp
                for c in repeat:
                    st.append(c)
             
            # if s[i] is not ']', simply push s[i] to the stack
            else:
                st.append(s[i])
                
        res = ""
        while len(st)!= 0:
            res = st[-1]+res
            st.pop()
        return res

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        
        ob = Solution()
        print(ob.decodedString(s))
# } Driver Code Ends
