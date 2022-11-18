#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;

 cout<<"Genarating Random Number :\n";
 for(int i=0;i<10;i++){
    n=rand()%100;
    cout<<" "<<n<<" ";
 }
 cout<<"\n";
    return 0;
}
