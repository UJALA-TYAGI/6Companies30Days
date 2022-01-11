// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int botBorder = matrix.size()-1;
        int topBorder = 0;
        int lefBorder = 0;
        int rigBorder = matrix[0].size()-1;
        
        vector<int> result;
        
        while (true) {
            
            // 1 left to right
            for (int i=lefBorder; i<=rigBorder; i++)
                result.push_back(matrix[topBorder][i]);
            
            if (++topBorder > botBorder)
                return result;
            
            // 2 top to bottom
            for (int i=topBorder; i<=botBorder; i++)
                result.push_back(matrix[i][rigBorder]);
            
            if (--rigBorder < lefBorder)
                return result;
            
            // 3 right to left
            for (int i=rigBorder; i>=lefBorder; i--)
                result.push_back(matrix[botBorder][i]);
            
            if (--botBorder < topBorder)
                return result;
            
            // 4 bottom to top
            for (int i=botBorder; i>=topBorder; i--)
                result.push_back(matrix[i][lefBorder]);
            
            if (++lefBorder > rigBorder)
                return result;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
