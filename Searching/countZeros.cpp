// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
       int s = 0;
       int e = n-1;
       while(s<=e)
       {
           int mid = s+(e-s)/2;
           if(arr[mid]==1)
                s=mid+1;
            else
            {
                if(arr[mid-1]!=0 || mid==0)
                    return n-mid;
                else{
                    e = mid-1;
                }
            }
       }
       return 0;
    }
};

// { Driver Code Starts.
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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends