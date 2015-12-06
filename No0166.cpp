#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  long long int h, w, n, k, now, rest;

  cin >> h >> w >> n >> k;
  rest=(h*w)%n;
  rest += (rest==0) ? n : 0;
  cout << ((k==rest) ? "YES\n" : "NO\n");

  return 0;
}
