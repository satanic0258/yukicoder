#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
  int n;
  int time;
  string str;
  int typableLen, typableNum=0, missNum=0;
  
  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> time >> str;
    typableLen = floor((12*time)/1000);
    if((signed)(typableLen-str.length()) >= 0){
      typableNum+=str.length();
    }else{
      typableNum+=typableLen;
      missNum+=str.length()-typableLen;
    }
  }
  cout << typableNum << " " << missNum << endl;

  return 0;
}
