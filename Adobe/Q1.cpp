// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> v;
       for(int i=0;i<n;i++){
           int ss=arr[i];
           if(ss==s){
               v.push_back(i+1);
               v.push_back(i+1);
               return v;
           }
           else if(ss>s){
               continue;
           }
           else{
               for(int j=i;j<n;j++){
               ss=ss+arr[j+1];
               if(ss==s){
                   v.push_back(i+1);
                   v.push_back(j+2);
                   return v;
               }
               else if(ss>s){
                   break;
               }
               
           }
           }
           
       }
       v.push_back(-1);
       return v;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
