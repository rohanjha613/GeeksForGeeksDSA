#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<vector<int>> ans;
    vector<int> index(2,-1);
    index[0]=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            index[1]=i;
        else if(a[i]<=a[i-1])
        {
            if(index[0]!=-1 && index[1]!=-1){
                ans.push_back(index);
                index[0]=i;
                index[1]=-1;
            }
            else if(index[1]==-1)
                index[0]=i;
        }
    }
    if(index[0]!=-1 && index[1]!=-1){
                ans.push_back(index);
    }
    if(ans.size()==0)
        cout<<-1<<"\n";
    else{
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
    }
}
