#include <iostream>
#include <algorithm>
using namespace std;
#define REST 3000000

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, g, d, tmp, max=0, max_i;

  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> g >> d;
    tmp = g-d*30000;
    if(tmp>max){
      max=tmp;
      max_i=i;
    }
  }
  if(max*6>=REST){
    cout << "YES\n";
    for(int i=0; i<6; ++i) cout << max_i+1 << "\n";
  }else{
    cout << "NO\n";
  }

  return 0;
}
