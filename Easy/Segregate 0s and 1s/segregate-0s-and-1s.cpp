//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int i = 0, j = n-1;
        
        while(i < j)
        {
            if(arr[i] == 0)
            {
                i++;
            }
            else{
                if(arr[j] == 0)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    i++,j--;
                }
                else{
                    j--;
                }
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends