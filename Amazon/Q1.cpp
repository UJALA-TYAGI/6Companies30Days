// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int k, int N, int array[]) {
        // code here
        vector<int> stock(k*2, INT_MIN);
        stock[0] = -array[0];
        for(int i = 1; i < N; ++i) {
          stock[0] = max(stock[0], -array[i]);
          for (int j = 1; j < 2 * k; j += 2) {
            stock[j] = max(stock[j], stock[j - 1] + array[i]);
            if (j + 1 < 2 * k) {
              stock[j + 1] = max(stock[j + 1], stock[j] - array[i]);
            }
          }
        }
        return (max(0, stock[2 * k - 1]));
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends
