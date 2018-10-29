#include<bits/stdc++.h>

using namespace std;

int main(){
  int t,n,k,sum=0;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>k;
    int a[n];
    for(int j=0;j<n;j++){
      cin>>a[j];
      a[j]+=k;
      if(a[j]%7==0)
        sum++;
    }
    cout<<sum<<"\n";
    sum=0;
  }
  return 0;
}
