#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
  ll t;
  cin>>t;
  for(ll i=0;i<t;i++){
    ll a[26]={0},b[26]={0},len,flag=0;
    char c[26]={'a','b','c','d','e','f','g','h','i','j',
                'k','l','m','n','o','p','q','r','s','t',
                'u','v','w','x','y','z'};
    string s;
    cin>>s;
    len = s.length();
    if(len%2==0){
      for(ll j=len/2-1;j>=0;j--)
        for(ll k=0;k<26;k++)
          if(c[k]==s[j])
            a[k]++;

      for(ll j=len/2;j<len;j++)
        for(ll k=0;k<26;k++)
          if(c[k]==s[j])
            b[k]++;
    }

    else if(len%2!=0){
      for(ll j=len/2-1;j>=0;j--)
        for(ll k=0;k<26;k++)
          if(c[k]==s[j])
            a[k]++;

      for(ll j=len/2+1;j<len;j++)
        for(ll k=0;k<26;k++)
          if(c[k]==s[j])
            b[k]++;
    }

    for(ll x=0;x<26;x++)
      if(a[x]!=b[x])
        flag=1;

    if(flag==1)
      cout<<"NO"<<"\n";
    else
      cout<<"YES"<<"\n";

  }

  return 0;
}
