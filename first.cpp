// https://practice.geeksforgeeks.org/problems/count-digits5716/1
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N)
    {
        int c=N,temp,count=0;
        while(c!=0)
        {
            temp=c%10;
            if(temp>0)
            {
                if(N%temp==0)
                count++;
            }
            c=c/10;
        }

        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends