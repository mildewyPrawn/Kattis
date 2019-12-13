#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  float q, y, t;
  cin >> n;
  while (n--) {
    cin >> q >> y;
    t += q*y;
  }
  cout << t << endl;
}
