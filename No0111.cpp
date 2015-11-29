#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  long long int l, result=0;

  cin >> l;
  for(int i=0; i<(l-1)/2; ++i){
    result+=2*i+1;
  }
  cout << result << "\n";

  return 0;
}
