#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  s;
    cin>>s;
    int count=1,i;
    for(i=0;i<=s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            count++;
    }
    cout<<count<<endl;
    return 0;
}
