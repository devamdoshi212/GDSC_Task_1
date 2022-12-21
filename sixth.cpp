//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
// Not solved
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        int sum=0,temp=0,c=0;
        for(int i=0;i<n;)
        {
            c++;
            if(arr[i]!=0)
            i=i+arr[i];
            else
            {
                c=-1;
                break;
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends