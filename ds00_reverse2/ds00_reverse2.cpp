#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
  // write your code only in this function
  int x,y;
  x=a-v.begin();
  y=b-v.begin()-1;
  int c = x + y; // a=2,b=5,c=7,d=3
  int d = c / 2;
  for (int i = x; i <= d; i++) {
    int e = v[i];
    int f = v[y - i + x];
    v[i] = f;
    v[y - i + x] = e;
  }
}

int main() {
  // read input
  freopen("data/1.in", "r", stdin);
  int n, a, b;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    v.push_back(c);
  }
  cin >> a >> b;

  // call function
  reverse(v,v.begin()+a,v.begin()+b+1);

  // display content of the vector
  for (auto &x : v)
    cout << x << " ";
  cout << endl;

  freopen("data/1.sol", "r", stdin);
  vector<int> sol;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    sol.push_back(c);
  }

  for (int i = 0; i < n; i++) {
    if (v[i] != sol[i]) {
      cout << "incorrect " << i << ": " << v[i] << ",  " << sol[i] << "\n";
    }
  }
}
