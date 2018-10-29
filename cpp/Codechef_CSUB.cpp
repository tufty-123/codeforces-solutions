#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll t;

  cin>>t;
  for(ll i=0;i<t;i++){
    string s;
    ll n,sum=0,num=0;
    cin>>n>>s;

    for(ll j=0;j<n;j++)
      if(s[j]=='1')
        sum++;

    num = ((sum*(sum-1))/2) + sum;
    cout<<num<<endl;
    sum=0;
    num=0;
  }

  return 0;
}
