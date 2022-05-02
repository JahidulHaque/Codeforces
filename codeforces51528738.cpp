
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,x,y=0,c=1,mx=0,o=0;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(y==0 && x == 0)
            y = i+1;

        v.push_back(x);
        if(x==0)
            ++o;
    }
    for(ll i=1;i<n;++i)
    {
        if(v[i]==1 && v[i-1]==1)
        {
            ++c;
        }
        if(c>mx)
            mx = c;
        if(v[i]== 0)
            c=1;
    }
    if(v[n-1]==0)
        c=0;
    else
        c=1;
    for(ll i=n-2;i>=0;--i)
    {
        if(v[i]==1&&v[i+1]==1)
            ++c;
        else
            break;
    }
    //cout<<y<<c<<endl;
    if(o==n)
        cout<<0<<endl;
    else if(c+(y-1)>mx)
        cout<<c+(y-1)<<endl;
    else
        cout<<mx<<endl;
}
