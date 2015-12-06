#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  double a, b, x, y, total;
  cout.precision(15);

  cin >> a >> b >> x >> y;
  if(a/b<x/y) total=y+y*a/b;
  else        total=x+x*b/a;
  cout << total << "\n";

  return 0;
}
