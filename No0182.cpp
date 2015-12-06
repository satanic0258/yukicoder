#include <iostream>
#include <set>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, input, total=0;
  set<int> a;
  set<int> aOverlap;
  set<int>::iterator it;

  cin >> n;
  for(int i=0; i<n; ++i){
    it=a.end();
    cin >> input;
    if(a.find(input)==it) a.insert(input);
    else                  aOverlap.insert(input);
  }
  cout << a.size()-aOverlap.size() << "\n";

  return 0;
}
