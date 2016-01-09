#include <iostream>
#include <set>
using namespace std;

#define PR(d) {cout << #d << "\t:" << d << "\n";}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  long long int w, h, n, input;
  set<int> s;
  set<int> k;

  cin >> w >> h >> n;
  for(int i=0; i<n; ++i){
    cin >> input;
    s.insert(input);
    cin >> input;
    k.insert(input);
  }
  cout << w*h-(w-s.size())*(h-k.size())-n << "\n";

  return 0;
}
