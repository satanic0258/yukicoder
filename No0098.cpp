#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int xp, yp;

  cin >> xp >> yp;
  cout << floor(sqrt(xp*xp+yp*yp)*2)+1 << "\n";

  return 0;
}
