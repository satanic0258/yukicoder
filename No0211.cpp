#include <iostream>
#include <vector>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int k, cnt=0, tmp;
  vector<int> prime{2, 3, 5, 7, 11, 13};
  vector<int> compo{4, 6, 8, 9, 10, 12};
  cout.precision(13);

  cin >> k;
  for(int i=0; i<6; ++i){
    if(k%prime[i]==0){
      tmp=k/prime[i];
      for(int j=0; j<6; ++j){
	if(tmp==compo[j]) ++cnt;
      }
    }
  }
  cout << cnt/36.0 << "\n";

  return 0;
}
