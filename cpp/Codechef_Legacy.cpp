#include<bits/stdc++.h>

using namespace std;

int main(){
  int t=0,n=0,c=0,a=0,sum=0;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>c;
    for(int j=0;j<n;j++){
      cin>>a;
      sum+=a;
    }
    if(c>=sum)
      cout<<"Yes\n";
    else
      cout<<"No\n";
    sum=0;
  }
  return 0;
}
