#include <iostream>
#include <math.h>
using namespace std;

int main(){
  double w;
  int d,di;

  cin >> w >> d;
  for(di=d;di>1;--di) w-=floor(w/di/di);

  cout << w << endl;

  return 0;
}
