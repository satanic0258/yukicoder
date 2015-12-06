#include <iostream>
#include <vector>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, cnt=0;
  char input;
  cin >> n;
  vector<char> s(n);

  for(int i=0; i<n; ++i) cin >> s[i];
  cin.ignore();
  for(int i=0; i<n; ++i){
    cin >> input;
    if(input!=s[i]) ++cnt;
  }
  cout << cnt << "\n";

  return 0;
}
