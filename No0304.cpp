#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  int num=-1;

  while(1){
    ++num;
    cout << num/100 << (num%100)/10 << num%10 << endl;
    if(cin.get()=='u') return 0;
    while(cin.get()!='\n');
  }
}
