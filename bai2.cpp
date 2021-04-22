#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    map<char,int> m;
    map<char,int> ::iterator i;
    cin>>s;
    ifstream file(s);
    while(file>>t)
    {
        for(char c='a';c<='z';c++)
        {
            if(t.find(c)!=string::npos) m[c]++;
        }
    }
    for(char c='a';c<='z';c++)
    {
        if(m[c])
        {
            cout<<c<<": "<<m[c]<<endl;
        }
    }
    return 0;
}
