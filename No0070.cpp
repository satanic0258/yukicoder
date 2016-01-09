#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n, H, M, h, m, total=0;

  cin >> n;

  for(int i=0; i<n; ++i){
    cin >> H; cin.ignore();
    cin >> M; cin.ignore();
    cin >> h; cin.ignore();
    cin >> m;
    M=H*60+M;
    m=h*60+m;
    total += (M<m) ? (m-M) : (m-M+1440);
  }
  cout << total << "\n";

  return 0;
}
