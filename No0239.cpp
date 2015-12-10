#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define NYAN "nyanpass"

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, bNyan=0, nyan_i;
  string str;
  cin >> n;
  vector<int> a(n, 1);

  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      cin >> str;
      if(str!=NYAN && str!="-") a[j]=0;
    }
  }
  for(int i=0; i<n; ++i){
    if(a[i]==1){
      if(bNyan==1){
	cout << -1 << "\n";
	return 0;
      }
      nyan_i=i;
      bNyan=1;
    }
  }
  if(bNyan==0)nyan_i=-2;
  cout << nyan_i+1 << "\n";

  return 0;
}
