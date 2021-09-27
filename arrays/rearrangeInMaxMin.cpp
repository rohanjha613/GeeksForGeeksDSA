/*rearrange a sorted order in amx min order.
eg: i/p : {1,2,3,4,5,6}-->{6,1,5,2,4,3};*/
#include<bits/stdc++.h>
using namespace std;
//naive approach O(n) time and O(n) space;
void rearrange(long long *arr, int n) 
    { 
    	int *temp = new int[n];    	for(int i=0;i<n;i++)
    	    temp[i]=arr[i];
    	int low = 0;
    	int high = n-1;
    	int i=0;
    	while(i<n)
    	{
    	    if(i%2==0){
    	        arr[i++]=temp[high--];
    	    }
    	    else{
    	        arr[i++]=temp[low++];
    	    }
    	}
    	delete []temp;
    }
//optimised approach O(n) time O(1) space -> storing two index at one place.
//original ele arr[i]%maxEle, new ele arr[i]/maxEle
void rearrangeOpt(long long *arr,int n){
    int high = n-1;
    int low = 0;
    int maxEle = arr[n-1]+1;
    for(int i=0;i<n;i++)
    {
        if(i%2==1){
            arr[i] += (arr[low]%maxEle)*maxEle;
            low++;
        }
        else{
            arr[i] += (arr[high]%maxEle)*maxEle;
            high--;
        }
    }
    for(int i=0;i<n;i++)
        arr[i]=arr[i]/maxEle;
}
int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    rearrangeOpt(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}