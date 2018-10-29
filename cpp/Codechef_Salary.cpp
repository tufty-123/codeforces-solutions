#include<bits/stdc++.h>

using namespace std;

int main(){
  int t,n,sum=0;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    int a[n],b[n-1];
    for(int j=0;j<n;j++)
      cin>>a[j];
    sort(a,a+n);
    for(int j=n-1;j>0;j--)
      b[j-1]=a[j]-a[j-1];
    for(int j=0;j<n-1;j++){
      sum+=(b[n-j-2]*(j+1));
    }
    cout<<sum<<"\n";
    sum=0;
  }
  return 0;
}
