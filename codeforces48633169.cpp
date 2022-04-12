
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn=101,mx=0,mn2 = 100000,s=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        v.push_back(x);
        if(x<mn)
            mn = x;
        if(x>mx)
            mx = x;
    }
    for(int i=mn;i<=mx;++i)
    {
        s = 0;
        for(int j=0;j<n;++j)
        {
            if(v[j]!=i)
              s += abs(v[j]-i)-1;
        }
        if(s < mn2)
        {
            mn2 = s;
            x = i;
        }
    }
    cout<<x<<" "<<mn2<<endl;
}
