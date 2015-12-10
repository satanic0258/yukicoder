#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  char input;
  int total=0;

  while((input=cin.get())!='\n'){
    if(input>='0' && input<='9') total+=input-0x30;
  }
  cout << total << "\n";

  return 0;
}
