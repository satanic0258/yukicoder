#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  
  int n, H, M, h, m, total=0;

  cin >> n;

  for(int i=0; i<n; ++i){
    cin >> H; cin.ignore();
    cin >> M; cin.ignore();
    cin >> h; cin.ignore();
    cin >> m;
    if(M>m) total-=60;
    total+=((h+24-H)%24)*60 + (m+60-M)%60;
  }
  cout << total << "\n";

  return 0;
}
