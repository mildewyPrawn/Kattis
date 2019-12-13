#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string i;
  int t = 0;
  while (n--) {
    cin >> i;
    int p = i[i.size()-1] - '0';
    string s = i.substr(0,i.size()-1);
    int b = stoi(s);
    t += pow(b, p);
  }
  cout << t << endl;
}
