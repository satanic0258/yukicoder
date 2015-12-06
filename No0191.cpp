#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, input, base, total=0, ans=0;
  vector<int> c;
  int i;

  cin >> n;
  for(i=0; i<n; ++i){
    cin >> input;
    c.push_back(input);
    total+=input;
  }
  base=total*0.1;
  sort(c.begin(), c.end());
  for(i=0; i<n && c[i]<=base; ++i);
  cout << i*30 << "\n";

  return 0;
}
