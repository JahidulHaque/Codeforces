
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n,o,k,x,c=0;
    cin>>n>>o>>k;
    vector<lli>v1;
    //vector<lli>v2;
    map<lli,lli>m;
    map<lli,lli>::iterator it = m.begin();

    for(int i=1;i<=n;++i)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(m.count(x))
        {
            if(v1[i]>m[x])
                m[x] = v1[i];
        }
        else
        {
            m.insert(pair<lli,lli>(x,v1[i]));
        }
    }
    lli c2=0;
    for(int i=0;i<k;++i)
    {
        cin>>x;
        for(it = m.begin();it!=m.end();++it)
        {
            if(v1[x-1] == it->second)
                c=1;
        }
        if(c==0)
            ++c2;
        c=0;
    }
    cout<<c2<<endl;
}
