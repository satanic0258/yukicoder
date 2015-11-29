#include <iostream>
using namespace std;

int main(){
  int n, input, result=0;

  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> input;
    (input%2==0) ? ++result : --result;
  }
  result = (result<0) ? -result : result;

  cout << result << "\n";

  return 0;
}
