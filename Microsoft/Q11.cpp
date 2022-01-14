// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	vector<string> v;
    string s=""; 
    for(int i=1;i<=N;i++){
       int q=i;
       while(q){
           int p=q%2;
           s=s+to_string(p);
           q=q/2;
       }
       reverse(s.begin(), s.end());
       v.push_back(s);
       s="";
    }
    
    return v;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
