#include <iostream>
#include <cmath>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int l, n;
  char tmp;

  cin >> l >> n;
  for(int i=0;i<4*n; ++i) cin.get();
  cout.precision(10);
  cout << pow(2, l-3)*n << "\n";

  return 0;
}
