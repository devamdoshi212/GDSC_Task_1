// https://practice.geeksforgeeks.org/problems/palindrome0746/1
//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int i=0;
		    string s=to_string(n);
		    int x=s.length();
		    for(i=0;i<x/2;i++)
		    {
		        if(s[i]!=s[x-i-1])
		        {
    		        return "No";
		        }
		        
		    }
		    return "Yes";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends