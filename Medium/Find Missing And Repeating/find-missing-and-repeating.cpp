//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        unordered_map<int,int>mpp;
        for(int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }
        
        int n2 =0, nm = 0;
        for(int i = 1; i <= n; i++)
        {
            if(mpp[i] ==2) n2 = i;
            if(mpp[i] == 0) nm = i;
        }
        
        return {n2,nm};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends