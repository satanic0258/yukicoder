#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  double p, q, p1, p2;

  cin >> p >> q;
  p1 = (1-p)*q;
  p2 = p*(1-q)*q;
  cout << ((p1<p2) ? "YES\n" : "NO\n");

  return 0;
}
