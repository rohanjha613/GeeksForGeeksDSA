#include<bits/stdc++.h>
using namespace std;
int maxIndexDiff(int arr[], int n) 
{ 
    int lmin[n];
    int rmax[n];
    lmin[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
        lmin[i] = min(lmin[i],lmin[i-1]);
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i],rmax[i+1]);
    int ans=-1;
    for(int i=0,j=0;i<n,j<n;)
    {
        if(lmin[i]<=rmax[j])
        {
            ans = max(ans,j-i);
            j+=1;
        }
        else
            i+=1;
    } 
    return ans;
}
int maxIndexDiff1(int arr[], int n)
{
    int maxDiff;
        int i, j;

    int* LMin = new int[(sizeof(int) * n)];
    int* RMax = new int[(sizeof(int) * n)];

    /* Construct LMin[] such that 
    LMin[i] stores the minimum value 
    from (arr[0], arr[1], ... arr[i]) */
    LMin[0] = arr[0];
    for (i = 1; i < n; ++i)
        LMin[i] = min(arr[i], LMin[i - 1]);

    /* Construct RMax[] such that 
    RMax[j] stores the maximum value from 
    (arr[j], arr[j+1], ..arr[n-1]) */
    RMax[n - 1] = arr[n - 1];
    for (j = n - 2; j >= 0; --j)
        RMax[j] = max(arr[j], RMax[j + 1]);

    /* Traverse both arrays from left to right
    to find optimum j - i. This process is similar to 
    merge() of MergeSort */
    i = 0, j = 0, maxDiff = -1;
    while (j < n && i < n) {
        if (LMin[i] <= RMax[j]) {
            maxDiff = max(maxDiff, j - i);
            j = j + 1;
        }
        else
            i = i + 1;
    }
    return maxDiff;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxEle1 = maxIndexDiff(arr,n);
    int maxEle = maxIndexDiff1(arr,n);
    cout<<maxEle1<<"\n";
    return 0;
}