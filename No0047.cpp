#include <iostream>
using namespace std;

int main(){
  int n,max=1,cnt=0;
  cin >> n;
  while(max<n){
    max*=2;
    ++cnt;
  }
  cout << cnt << endl;

  return 0;
}
