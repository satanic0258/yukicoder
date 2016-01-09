#include <iostream>
#include <vector>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int p, n, k;
  vector<bool> result;

  cin >> p;
  for(int i=0; i<p; ++i){
    cin >> n >> k;
    int tmp=(n-1)%(k+1);
    if(tmp>0 && tmp<=k) result.push_back(true);
    else result.push_back(false);
  }
  for(int i=0; i<p; ++i){
    cout << ((result[i]==true) ? "Win\n" : "Lose\n");
  }
  return 0;
}
