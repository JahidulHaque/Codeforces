
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int c1=0,c2=0,c3=0;
    if(s.length()==t.length())
    {
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c1=1;
            if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
                c2=1;

            if(c1!=c2)
            {
                c3 = 1;
                break;
            }
            c1=0;c2=0;
        }
        if(c3 == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
