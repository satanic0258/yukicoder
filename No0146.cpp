#include <iostream>
#include <cmath>
using namespace std;

#define MOD_NUM 1000000007

int main(){
  ios::sync_with_stdio(false);
  long long int n, c, d, total=0;

  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> c >> d;
    c=((c+1)/2)%MOD_NUM;
    d%=MOD_NUM;
    total+=(c*d)%MOD_NUM;
    total%=MOD_NUM;
  }
  cout << total << "\n";

  return 0;
}
