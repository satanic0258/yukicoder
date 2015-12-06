#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, x, y, ans;

  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> x >> y;
    if(y-x<=0){
      cout << -1 << "\n";
      return 0;
    }else{
      if(i==0) ans=y-x;
      else{
	if(y-x!=ans){
	  cout << -1 << "\n";
	  return 0;
	}
      }
    }
  }
  cout << ans << "\n";

  return 0;
}
