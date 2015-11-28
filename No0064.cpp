#include <iostream>
using namespace std;

int main(){
  long long int f0, f1, f2, n, fn;

  cin >> f0 >> f1 >> n;

  f2=f0^f1;
  switch(n%3){
  case 0: fn=f0; break;
  case 1: fn=f1; break;
  case 2: fn=f2; break;
  }
  
  cout << fn << endl;

  return 0;
}
