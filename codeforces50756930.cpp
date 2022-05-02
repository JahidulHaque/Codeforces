#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n,x;
    cin>>n;
    vector<lli>v;
    set<lli>s;
    map<lli,lli>m;
    map<lli,lli>::iterator it = m.begin();
    for(int i=0; i<n; ++i)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {

            if(m.count(v[i]+v[j]))
            {
                x = v[i]+v[j];
                ++m[x];
            }
            else
            {
                m.insert(pair<lli,lli>(v[i]+v[j],1));
            }
        }
    }
    lli mx = 0;
    for(it = m.begin();it!=m.end();++it)
    {
        if(it->second > mx)
            mx = it->second;
    }
    cout<<mx<<endl;
}
