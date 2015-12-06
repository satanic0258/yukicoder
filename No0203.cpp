#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int chain=0, max=0;
  char c;
  
  for(int i=0; i<14; ++i){
    if(i==7) cin.ignore();
    cin >> c;
    if(c=='o') ++chain;
    else{
      max= (max<chain) ? chain : max;
      chain=0;
    }
  }
  max= (max<chain) ? chain : max;
  cout << max << "\n";

  return 0;
}
