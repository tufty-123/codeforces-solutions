#include<bits/stdc++.h>

using namespace std;

int main(){

  int t,n,flag=0;
  cin>>t;

  for(int i=0;i<t;i++){
    cin>>n;
    int a[n],b[11]={0,0,0,0,0,0,0,0,0,0,0};

    for(int j=0;j<n;j++){
      cin>>a[j];
      if((a[j]<1)||(a[j]>7)){
        flag=1;
      }
      else{
        b[(a[j])]++;
      }
    }

    for(int j=1;j<=7;j++)
      if(b[j]<1){
        flag=1;
        break;
      }

    if(n%2==0){
      for(int m=n/2-1;m>=0;m--)
        if(a[m]!=a[(n-1)-m]){
          flag=1;
          break;
        }
    }

    if(n%2!=0){
      if((a[n/2])!=7){
        flag=1;
      }
      else{
        for(int m=n/2-1;m>=0;m--)
          if(a[m]!=a[n-1-m]){
            flag=1;
            break;
          }
      }
    }

    if(flag==1)
      cout<<"no\n";
    else
      cout<<"yes\n";

    flag=0;
  }
  return 0;
}
