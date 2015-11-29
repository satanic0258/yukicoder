#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int k, n, f, input, result;

  cin >> k >> n >> f;
  result=k*n;
  for(int i=0; i<f; ++i){
    cin >> input;
    result-=input;
  }
  cout << ((result<0) ? -1 : result) << "\n";

  return 0;
}
