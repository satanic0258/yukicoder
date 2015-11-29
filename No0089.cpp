#include <iostream>
using namespace std;

#define PI 3.141592653589793238462643383279

int main(){
  ios::sync_with_stdio(false);
  double c, Rin, Rout;
  double volume;
  
  cin >> c >> Rin >> Rout;
  cout.precision(20);
  cout << 2*PI*(Rin+(Rout-Rin)/2) * (PI*(Rout-Rin)/2*(Rout-Rin)/2) * c << "\n";

  return 0;
}
