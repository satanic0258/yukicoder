#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double x, y, l;
  int cnt=0;

  cin >> x >> y >> l;

  if(y>=0 && x!=0) ++cnt;
  else if(y<0) cnt+=2;
  
  cnt+=ceil(fabs(x)/l);
  cnt+=ceil(fabs(y)/l);

  cout << cnt << endl;

  return 0;
}
