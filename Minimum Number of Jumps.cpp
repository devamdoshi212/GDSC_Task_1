//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        int i,j,k,l;
        j=arr[0];
        l=arr[0];
        if(n==1 || n==0)
        return 0;
        if(j==0)
        return -1;
        k=1;
        for(i=1;i<n;i++)
        {
            l--;
            if(arr[i]+i>j)
            {
                j = arr[i]+i;
            }
            if(l<=0)
            {
                if(i==n-1)
                    break;
                k++;
                l = j-i;
                if(l<=0)
                {
                    return -1;
                }
            }
        }
        return k;
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