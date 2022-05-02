
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin>>n>>m;
    if(m%n!=0)
        cout<<-1<<endl;
    else
    {
        ll x = m/n,c=0;
        while(x!=1)
        {
            if(x%2==0)
            {
                x = x/2;
                ++c;
            }
            else if(x%3==0)
            {
                x = x/3;
                ++c;
            }
            else{
                c = -1;
                break;
            }
        }
        if(c==-1)
            cout<<-1<<endl;
        else
            cout<<c<<endl;
    }
}
