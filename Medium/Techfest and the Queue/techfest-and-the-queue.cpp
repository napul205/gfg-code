//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    
    int primeFactor(int a){
        int ans=0;
       
        while(a%2 == 0){
            ans++;
            a/=2;
        }
        
        for(int i=3; i<=sqrt(a); i+=2){
            while(a%i == 0 && a>1){
                ans++;
                a/=i;
            }
        }
        if(a>2) ans++;
        return ans;
    }
    
	int sumOfPowers(int a, int b){
	    // Code here
	    int ans=0;
	    for(int i=a; i<=b; i++){
            ans+= primeFactor(i);
        }
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends