#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,int a,int b) {
  //write your code only in this function
  int c=a+b;//a=2,b=5,c=7,d=3
  int d=c/2;
  for(int i=a;i<=d;i++){
    int e=v[i];
    int f=v[b-i+a];
    v[i]=f;
    v[b-i+a]=e;
  }

  
}

int main() {
  //read input
  freopen("data/10.in","r",stdin);
  int n,a,b;
  cin >> n;
  vector<int> v;
  for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    v.push_back(c);
  }
  cin >> a >> b;

  //call function
  reverse(v,a,b);

  //display content of the vector
  for (auto &x : v)
    cout << x << " ";
  cout << endl;

  freopen("data/10.sol","r",stdin);
  vector<int> sol;
  for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    sol.push_back(c);
  }

  for (int i = 0;i < n;i++) {
   if(v[i]!=sol[i]){
     cout<<"incorrect "<<i<<": "<<v[i]<<",  "<<sol[i]<<"\n";
   }
  }
  
  
}
