// https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) 
    {
        
        long long lcm =(A*B)/gcd(A,B);
        
        vector<long long> ans;
        ans.push_back(lcm);
        ans.push_back(gcd(A,B));
        return ans;
    }
    long long gcd(long long A,long long B)
        {
            if (A == 0)
                return B;
            return gcd(B % A, A);
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends