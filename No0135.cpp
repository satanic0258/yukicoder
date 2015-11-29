#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int n, input, d, min=10000000;
  cin >> n;
  int x[n];
  int bDiffer=0;
  
  for(int i=0; i<n; ++i){
    cin >> x[i];
  }
  sort(x,x+n);
  for(int i=0; i<n-1; ++i){
    d=x[i]-x[i+1];
    d *= (d<0) ? -1 : 1;
    if(d!=0 && min>d){
      min=d;
      bDiffer=1;
    }
  }
  cout << min*bDiffer << "\n";

  return 0;
}
