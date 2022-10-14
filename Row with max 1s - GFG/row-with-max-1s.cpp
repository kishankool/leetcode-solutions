//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
   
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int ans;
	    vector<pair<int,int>>v;
	     for(int i=0;i<n;i++)
	     {
	         for(int j=0;j<m;j++)
	         {
	             if(arr[i][j]==1)
	             {
	                 v.push_back({j,i});
	                 break;
	             }
	         }
	         
	     }
	     if(v.empty()) return -1;
	    sort(v.begin(),v.end());
	    ans=v.front().second;
	    return ans;
	  
	  
	   
	  	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends