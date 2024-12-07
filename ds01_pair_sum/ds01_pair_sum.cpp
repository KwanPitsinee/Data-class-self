#include<iostream>
#include<cstdlib> 
#include<cmath>   
#include<algorithm>//fill
#include<cstring>//memset
using namespace std;

int main(){
  int n,m;
  int an,mp[1000000],am;
  fill(mp,mp+1000000,0);
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>an;
    mp[an]++;
  }
  for(int i=1;i<=m;i++){
    cin>>am;
    bool b=0;
    for(int j=0;j<=am/2;j++){
      if(j==am-j && mp[am-j]>=2){
        cout<<"YES"<<'\n';
        b=1;
        break;
      }
      else if(mp[j]>=1 && mp[am-j]>=1){
        cout<<"YES"<<'\n';
        b=1;
        break;
      }
    }
    if(b==0){
      cout<<"NO"<<'\n';
    }   
  }
}
