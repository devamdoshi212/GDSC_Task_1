// https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n)
    {
        int sum=0,a,b,c,N=n;
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        sum=pow(a,3)+pow(b,3)+pow(c,3);
        if(sum==N)
        return "Yes";
        else
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends