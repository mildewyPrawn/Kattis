#include<bits/stdc++.h>
using namespace std;

int main() {
  int x, t;
  cin >> x;
  cin >> t;
  x = x*(t+1);
  int p;
  while(t--) {
    cin >> p;
    x -= p;
  }
  cout << x << endl;
}
