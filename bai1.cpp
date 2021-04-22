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
        for(char x: t)
        m[x]++;
    }
    for(char x='a'; x<='z';x++)
    {
        if(m[x])
        cout <<x<<": "<< m[x]<<endl;
    }
    return 0;
}
