#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, h, m, t;

  cin >> n >> h >> m >> t;
  m+=(n-1)*t;
  h+=m/60;
  m%=60;
  h%=24;

  cout << h << "\n" << m << "\n";

  return 0;
}
