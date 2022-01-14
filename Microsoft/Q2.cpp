// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	vector<int> adj[N];
    vector<int> d(N, 0);
    
    for(auto edge: prerequisites)
    {
        int u = edge.first;
        int v = edge.second;
        
        adj[u].push_back(v);
        
        d[v]++;
    }
    
    queue<int> q;
    for(int i = 0; i < N; i++)
    {
        if(d[i] == 0)
        {
            q.push(i);
        }
    }
    
    int count = 0;
    
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        
        for(auto v: adj[u])
        {
            d[v]--;
            
            if(d[v] == 0)
            {
                q.push(v);
            }
        }
        
        count++;
    }
    
    return count == N;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends
