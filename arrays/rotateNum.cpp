#include <iostream>
#include<cmath>
using namespace std;
int noOfdigits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        ++count;
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int tempNum=n;
    int len = noOfdigits(n);
    int sum=0;
    if(k>0)
    {
        k=k%len;
        int count=1;
        while(k--)
        {
            sum=pow(10,count-1)*(n%10)+sum;
            n=n/10;
            ++count;
        }
        int temp = n;
        while(temp>0)
        {
            sum=sum*10;
            temp=temp/10;
        }
        sum=sum+n;
    }
    else{
            k=abs(k)%len;
            int i=1;
            while(i<=(len-k))
            {
                sum=pow(10,i-1)*(n%10)+sum;
                n=n/10;
                i++;
            }
            while(k--)
            {
                sum=sum*10;
            }
        sum=sum+n;  
    }
    cout<<sum<<"\n";
    return 0;
}