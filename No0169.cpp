#include <iostream>
using namespace std;

int main(){
  double k,s;

  cin >> k >> s;
  cout << (int)(s/(100-k)*100) << "\n";

  return 0;
}
