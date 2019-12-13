#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;
  int i;
  w *= w;
  h *= h;
  h += w;
  w = sqrt(h);
  while (n--) {
    cin >> i;
    i <= w ? cout << "DA" << endl : cout << "NE" << endl;
  }
}
