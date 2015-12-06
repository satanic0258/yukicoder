#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, Kscore=0, input;
  cin >> n;
  vector<int> a(n, 0);
  vector<int> score(100, 0);
  
  for(int i=0; i<n; ++i) cin >> a[i];
  for(int i=0; i<n; ++i){
    cin >> input;
    if(input==0) Kscore+=a[i];
    else score[input-1]+=a[i];
  }
  cout << ( ( Kscore<*max_element(score.begin(), score.end()) ) ? "NO\n" : "YES\n");

  return 0;
}
