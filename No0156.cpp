#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int n, m, input, i;
  vector<int> c;

  cin >> n >> m;
  for(i=0; i<n; ++i){
    cin >> input;
    c.push_back(input);
  }
  sort(c.begin(), c.end());
  for(i=0; i<n && m>0; ++i){
    m-=c[i];
  }
  i += (m<0) ? -1 : 0;
  cout << i << "\n";

  return 0;
}
