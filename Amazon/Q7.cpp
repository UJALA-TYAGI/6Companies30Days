// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string str){
		    // Code here
		    string ans = "";
		    deque<char> q;
		    int arr[27] = {0};
		    for(int i=0;i<str.length();i++){
		        if(!arr[str[i]-'a']){
		            q.push_back(str[i]);
		        }
		        arr[str[i] - 'a']++;
		        if(arr[q.front() - 'a'] == 1){
		            ans += q.front();
		        }
		        else{
		            while(!q.empty() and arr[q.front() - 'a'] != 1){
		                q.pop_front();
		            }
		            if(!q.empty()){
		                ans += q.front();
		            }else{
		                ans += "#";
		            }
		        }
		    }
		    return ans;
		}
		


};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
