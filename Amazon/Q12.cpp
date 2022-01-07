// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string result = "";
        int index = 0;
 
        while (n > 0){
 
            index = (n - 1) % 26;
	    // result += char(65 + index);
            result += ('A' + index);
            n = (n - 1) / 26;
        }
 
        reverse(result.begin(), result.end());
        return result;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends
