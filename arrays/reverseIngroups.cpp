#include<bits/stdc++.h>
using namespace std;
void reverse(vector<long long>& a,int start, int end)
    {
        while(start<end)
        {
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i=0;
        while(i<n)
        {
            reverse(arr,i,(i+k)-1);
            i+=k;
        }
        if(n%k!=0)
        {
            i=n%k+1;
            reverse(arr,i,n-1);
        }
    }
int main()
{
    int n;
    cin>>n;
    vector<long long> arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    reverseInGroups(arr,n,k);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}