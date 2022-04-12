
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    vector<int>v1;
    vector<int>v2;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(i == 0)
        {

            for(int j=0;j<x;++j)
            {
                cin>>y;
                v1.push_back(y);
                v2.push_back(y);
            }
        }
        else
        {
            for(int j=0;j<x;++j)
            {
                cin>>y;
                for(int k=0;k<v1.size();++k)
                    if(y == v1[k])
                        v1[k] = 0;
            }

            for(int j=0;j<v1.size();++j)
            {
                if(v1[j]==0)
                {
                    v1[j] = v2[j];
                }
                else
                    v2[j] = 0;
            }
        }
    }
    for(int i=0;i<v2.size();++i)
        if(v2[i]!=0)
            cout<<v2[i]<<" ";
    cout<<endl;
}
