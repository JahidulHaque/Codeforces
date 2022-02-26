
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,x,y,so,se;
    cin>>q;


    for(int i=0;i<q;++i)
    {
        cin>>x>>y;

        if(y%2 ==0 )
        {
            so = (y/2)*(y/2);
            se = (y/2)*((y/2)+1);
        }
        else
        {
            so = ((y/2)+1)*((y/2)+1);
            se = (y/2)*((y/2)+1);
        }
        if((x-1)%2 == 0)
        {
            so -= ((x-1)/2)*((x-1)/2);
            se -= ((x-1)/2)*((x-1)/2+1);
        }
        else
        {
            so -= ((x-1)/2+1)*((x-1)/2+1);
            se -= ((x-1)/2)*((x-1)/2+1);
        }
        cout<<-so+se<<endl;
    }

}
