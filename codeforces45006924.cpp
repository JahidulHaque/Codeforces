
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,s=0,mx=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]>mx)
            mx = a[i];
        s+=a[i];
    }
    for(int i=0;;++i)
    {
        x = (mx+i)*n - s;
        if(x>s)
        {
            cout<<mx+i<<endl;
            break;
        }
    }
}
