#include <iostream>
#include <cmath>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int x, y, r;
  
  cin >> x >> y >> r;
  x = (x<0) ? -x : x;
  y = (y<0) ? -y : y;
  cout << x+y+floor(r*sqrt(2))+1 << "\n";

  return 0;
}
