// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:

    vector<string> ans;
    string t;
    vector<char> ch[15];
    
    void rec(int a[],int n,int i){
        if(i==n){
            ans.push_back(t);
            return;
        }
        for(auto c:ch[a[i]]){
            t.push_back(c);
            rec(a,n,i+1);
            t.pop_back();
        }
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        int j=2,i=0;
        for(;i<18;i++)ch[j].push_back(char('a'+i)),j+=(i%3==2);
        ch[7].push_back('s');
        ch[8]={'t','u','v'};
        ch[9]={'w','x','y','z'};
        rec(a,N,0);
        return ans;
        //Your code here
        //Not in correct order
        // if(N==0) return {};
        // vector<string> m = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        // vector<string> res;
        // res.push_back("");
        
        // for(int i = 0; i<N; i++){
        //     vector<string> tmp;

        //     for(auto ch : m[digits[i]]){

        //         for (auto s : res)
        //             tmp.push_back(s+ch);
        //     }
        //     res.swap(tmp);
        // }
        // return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends
