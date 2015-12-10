#include <iostream>
#include <vector>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  char input;
  vector<char> s;
  int t, u, size;

  while((input=cin.get())!=' ') s.push_back(input);
  size=s.size();
  cin >> t >> u;
  for(int i=0; i<size; ++i){
    if(i!=t && i!=u) cout << s[i];
  }
  cout << "\n";

  return 0;
}
