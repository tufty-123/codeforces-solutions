#include<bits/stdc++.h>

using namespace std;

int main(){
  int x=0,y=0,t=0,k=0,n=0,p=0,c=0,flag=0;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>x>>y>>k>>n;
    if(y>=x){
      for(int j=0;j<n;j++)
        cin>>p>>c;
      flag=1;
    }
    else{
      for(int j=0;j<n;j++){
        cin>>p>>c;
        if(k>=c)
          if((y+p)>=x)
            flag=1;
      }
    }
    if(flag==1)
      cout<<"LuckyChef\n";
    else
      cout<<"UnluckyChef\n";
    flag = 0;
  }
  return 0;
}
