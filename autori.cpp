#include<bits/stdc++.h>
using namespace std;

int main() {
  string name;
  cin >> name;
  int i = 0;
  while(i < name.size()) {
    if ((int)name[i] > 64 && (int)name[i] < 91)
    cout << name[i];
    i++;
  }
  cout << endl;
}
