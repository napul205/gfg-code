//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    
	    map<int, int> prefixSum; 
        int maxLength = 0;
        int currentSum = 0;

        for (int i = 0; i < n; ++i) {
            currentSum += arr[i];
            int remainder = (currentSum % k + k) % k;

            if (remainder == 0) {
                maxLength = max(maxLength, i + 1);
            } else if (prefixSum.find(remainder) != prefixSum.end()) {
                maxLength = max(maxLength, i - prefixSum[remainder]);
            } else {
                prefixSum[remainder] = i;
            }
        }

        return maxLength;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends