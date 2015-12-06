#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  double a, b, c;
  int num_b, num_c;

  cin >> a >> b >> c;
  num_b=ceil(a/b);
  num_c=ceil(a/c);
  cout << ( (num_b*2/3.0 < num_c) ? "NO\n" : "YES\n" );

  return 0;
}
