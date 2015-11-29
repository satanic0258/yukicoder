#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int aw, ab, bw, bb, c, d;

  cin >> aw >> ab >> bw >> bb >> c >> d;
  if(ab-c>=0){
    bb+=c;
    ab-=c;
  }else{
    bw+=c-ab;
    bb+=ab;
    aw-=c-ab;
    ab=0;
  }
  if(bw-d>0){
    aw+=d;
    bw-=d;
  }else{
    aw+=bw;
    ab+=d-bw;
    bw=0;
    bb-=d-bw;
  }
  cout << aw << "\n";

  return 0;
}
