#include <iostream>
using namespace std;

int main(){
  int a,b,n=0;
  cin >> a >> b;
  while(b>0){
    b-=a;
    ++n;
  }
  cout << n << endl;

  return 0;
}
