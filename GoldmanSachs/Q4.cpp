// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
    vector<pair<char,int>> v;
    int count = 1;
    char c = src[0];
    
    for(int i = 1; i<src.size(); i++){
        if(src[i]==c){
            count+=1;
        }
        
        else{
            v.push_back(make_pair(c, count));
            c = src[i];
            count = 1;
        }
    }
    
    v.push_back(make_pair(c,count));
    string s ="";
    
    for(auto x: v){
        s += x.first;
        s += to_string(x.second);
    }
  
  return s;
}     

 

