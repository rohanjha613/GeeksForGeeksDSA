// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int left_index(vector<long long> v, long long x){
        int s = 0;
        int e = v.size()-1;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(v[mid]>x)
                e = mid-1;
            else if(v[mid]<x)
                s=mid+1;
            else{
                if(mid==0 || v[mid]!=v[mid-1])
                    return mid;
                else
                    e = mid-1;
            }
        }
        return -1;
    }
    int right_index(vector<long long> v, long long x){
        int s = 0;
        int e = v.size()-1;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(v[mid]>x)
                e = mid-1;
            else if(v[mid]<x)
                s=mid+1;
            else{
                if(mid==(v.size()-1) || v[mid]!=v[mid+1])
                    return mid;
                else
                    s = mid+1;
            }
        }
        return -1;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int first = left_index(v,x);
        if(first == -1)
            return make_pair(-1,-1);
        int second = right_index(v,x);
        return make_pair(first,second);
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends