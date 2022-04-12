
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,c=0;
    cin>>n;
    for(int i=1;i<=9;++i)
    {

        if(n%i == 0)
        {
            x = n/i;c=i;
        }
    }
    if(c!=0)
    {
        cout<<x<<endl;
        for(int i=1;i<=x;++i)
            cout<<c<<" ";
        cout<<endl;
    }
    else
    {
        cout<<n/2+1<<endl;
        for(int i=1;i<=n/2;++i)
            cout<<2<<" ";
        cout<<1<<endl;
    }
}
