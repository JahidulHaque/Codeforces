
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    double x,n,k,m,mx=0;
    cin>>n>>k>>m;
    vector<double>v;
    for(lli i=0;i<n;++i)
    {
        cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    if(n<m)
    {
        double avg = v[n-1]+min((m-(n-1)),k);
        //cout<<std::setprecision(6)<<avg<<endl;
        printf("%6lf",avg);cout<<endl;
    }
    else if(n>m)
    {
        double s=0.0,avg;
        for(lli i = m;i<n;++i)
        {
            s+=v[i];
        }
        avg = s/(n-m);
        printf("%6lf",avg);cout<<endl;
    }
    else
    {
        double avg=0;
        avg = v[n-1]+1;
        printf("%6lf",avg);
        cout<<endl;
    }
}
