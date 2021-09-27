#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int removeDup(int arr[],int n)
    {
      int res=0;
      for(int i=1;i<n;i++)
      {
        if(arr[i]!=arr[res])
        {
          ++res;
         arr[res]=arr[i];
          
        }
      }
      return res;
    }
};
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  Solution obj;
  int res = obj.removeDup(arr,n);
  for(int i=0;i<res;i++)
    cout<<arr[i]<<"\n";
  return 0;
}