#include <iostream>
#include <vector>
using namespace std;

int main(){
  string a,b;
  int len;
  vector<int> alpha(26, 0);
  
  cin >> a >> b;
  len=a.length();

  for(int i=0; i<len; ++i){
    ++alpha[a.at(i)-'a'];
    --alpha[b.at(i)-'a'];
  }
  for(int i=0; i<26; ++i){
    if(alpha[i]!=0){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  
  return 0;
}
