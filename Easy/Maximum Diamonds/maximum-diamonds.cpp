//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int arr[], int n, int k) {
    long long  ans = 0;  // Declare 'ans' variable before using it
    priority_queue<int, vector<int>> pq;

    for (int i = 0; i < n; i++)
        pq.push(arr[i]);

    int count = 0;

    while (!pq.empty() && count < k) {
        int currtop = pq.top();
        ans += currtop;
        pq.pop();
        count++;
        pq.push(currtop / 2);
    }

    return ans;
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends