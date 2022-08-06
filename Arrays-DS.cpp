#include <bits/stdc++.h>
using  namespace std;


int main(){
    int N,temp,i;
    cin>>N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
  for(int i=0;i<N/2;i++){
     temp=arr[i];
     arr[i]=arr[N-i-1];
     arr[N-i-1]=temp;
  }
  for(int i=0;i<N;i++){
        cout<<arr[i]<< " ";
    }



}
