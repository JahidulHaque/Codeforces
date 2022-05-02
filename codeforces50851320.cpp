
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n,x,m,s=0,y;
    cin>>n;
    vector<lli>v,v2;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        v.push_back(x);
        s+=x;
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;--i)
    {
        int j=0;
        if(i == n-1)
            v2.push_back(v[i]);
        else
        {
            v2.push_back(v2[j-1]+v[i]);
        }
        ++j;
    }
    cin>>m;
    lli s2=0;
    for(int i=0;i<m;++i)
    {
        cin>>y;
        s2 = v2[y];

        cout<<s-s2 + (s2 - v[n-y])<<endl;

    }
}
