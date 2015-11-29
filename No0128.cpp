#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  long long int n, m;

  cin >> n >> m;
  cout << (n/m)-(n/m)%1000 << "\n";

  return 0;
}
