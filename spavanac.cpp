#include<bits/stdc++.h>
using namespace std;

int main() {
  int h, m;
  cin >> h >> m;
  m -= 45;
  if (m < 0) {
    h--;
    m = 60-abs(m);
  }
  if (h == -1)
    h = 23;
  cout << h << ' ' << m << endl;
}
