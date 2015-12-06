#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long int n, a, b, max, total=0, parity;
  vector<int> w;

  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> a >> b;
    w.push_back(a+b*4);
  }
  sort(w.begin(), w.end());
  max = w.back();
  parity = max%2;
  for(int i=0; i<n-1; ++i){
    if(w[i]%2!=parity){
      cout << -1 << "\n";
      return 0;
    }else{
      while(w[i]<max){
	++total;
	w[i]+=2;
      }
    }
  }
  cout << total << "\n";

  return 0;
}
