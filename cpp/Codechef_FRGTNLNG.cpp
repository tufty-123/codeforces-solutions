#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
  ll t;
  cin>>t;
  for(ll i=0;i<t;i++){
    ll n,k;
    cin>>n>>k;
    string s[n];
    ll a[n]={0};

    for(ll j=0;j<n;j++)
      cin>>s[j];

    for(ll l=0;l<k;l++){
      ll num;
      cin>>num;
      string s2[num];

      for(ll m=0;m<num;m++)
        cin>>s2[m];

      for(ll x=0;x<n;x++)
        for(ll y=0;y<num;y++)
          if(strcmp(s[x].c_str(),s2[y].c_str())==0)
            a[x]=1;
    }

    for(ll z=0;z<n;z++)
      if(a[z]==1)
        cout<<"YES"<<" ";
      else
        cout<<"NO"<<" ";

    cout<<"\n";
  }

  return 0;
}
