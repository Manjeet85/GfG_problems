//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        //if(s.size() == 0) return "";
      
        int a = 0;
    
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ch){
                a++;
            }
            if(a == count){
                //return s.substr((s.size()+1)-count,s.size()-1);
                return string(begin(s)+i+1, end(s));
            }
        }
        
        
        return "";
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends