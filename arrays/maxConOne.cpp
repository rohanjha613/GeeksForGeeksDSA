#include<bits/stdc++.h>
using namespace std;
int countOnes(int arr[],int n)
{
    int maxCount=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            maxCount = max(count,maxCount);
            count=0;
        }
        else
            count++;
    }
    if(arr[n-1]==1)
    {
        maxCount = max(count,maxCount);
        count=0;
    }
    return maxCount;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<countOnes(arr,n)<<"\n";
    return 0;
}