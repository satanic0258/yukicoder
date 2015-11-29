#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int w, h;
  char c;
  
  cin >> w >> h >> c;
  c = (c=='B') ? 1 : -1;

  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      cout << ((c==1) ? "B" : "W");
      c*=-1;
    }
    cout << "\n";
    c *= (w%2==0) ? -1 : 1;
  }

  return 0;
}
