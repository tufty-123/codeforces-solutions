#include<bits/stdc++.h>

using namespace std;

int main(){
  int t,m,x,y,val,val2,a[100]={0},sum=0;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>m>>x>>y;

    for(int j=0;j<m;j++){
      cin>>val2;
      val=val2-1;
      a[val]=1;
      for(int k=1;k<=(x*y);k++){
        if(((val+k)>=0)&&((val+k)<100))
          a[val+k]=1;
        if(((val-k)>=0)&&((val-k)<100))
          a[val-k]=1;
      }
    }

    for(int l=0;l<100;l++)
      if(a[l]==0)
        sum++;

    cout<<sum<<endl;
    for(int m=0;m<100;m++)
      a[m]=0;
    sum=0;
  }
  return 0;
}
