#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=true;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sk_money=0;
    for(int i=0;i<n;i++)
    {
        
        if(sk_money>=(arr[i]-30))
            {
                sk_money -=(arr[i]-30);
                sk_money += 30;
            }
            else{
                flag=false;
                break;
            }
    }
    if(flag)
        cout<<"Transaction successful\n";
    else
        cout<<"Transaction failed\n";
    return 0;
}