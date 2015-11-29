#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int now=1;
  char input='\0';

  while(input!='\n'){
    cin.get(input);
    switch(input){
    case 'L': now = now*2;   break;
    case 'R': now = now*2+1; break;
    }
  }
  cout << now << "\n";

  return 0;
}
