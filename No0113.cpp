#include <iostream>
#include <cmath>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  char input='\0';
  int x=0, y=0;

  while(input!='\n'){
    cin.get(input);
    switch(input){
    case 'N': ++y; break;
    case 'E': --x; break;
    case 'W': ++x; break;
    case 'S': --y; break;
    }
  }
  cout << sqrt(x*x+y*y) << "\n";

  return 0;
}
