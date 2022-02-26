
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,s=0,r,g,b;
    cin>>n>>k;
    if((n*2)%k == 0)
        s += (n*2)/k;
    else
        s += (n*2)/k+1;

    if((n*5)%k == 0)
        s += (n*5)/k;
    else
        s += (n*5)/k+1;

    if((n*8)%k == 0)
        s += (n*8)/k;
    else
        s += (n*8)/k+1;
    cout<<s<<endl;
}
