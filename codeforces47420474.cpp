
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>vs;
    int l,x,y;
    l = s.length();
    if(l%2==0)
        x = l/2-1;
    else
        x = l/2;
    int i=0;
    while(i<= (l-1)-x)
    {
        if(i==0)
            vs.push_back(s[x]);
        else
        {
            if(i == ((l-1)-x) && l%2 ==0)
                vs.push_back(s[x+i]);
            else
            {
                vs.push_back(s[x+i]);
                vs.push_back(s[x-i]);

            }
        }
        ++i;
    }
    for(int i=0;i<vs.size();++i)
        cout<<vs[i];

    cout<<endl;


}
