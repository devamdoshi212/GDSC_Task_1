// https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) 
    {
        long long i=1,sum=0,bit[32]={0};
        while(X)
        {
            if(X%2!=0)
            {
                bit[i]=1;
                sum=sum+pow(2,32-i);
            }
            
            X=X/2;
            i++;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends