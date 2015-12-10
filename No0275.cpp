#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);

  for(int i=0; i<n; ++i) cin >> a[i];
  sort(a.begin(), a.end());
  cout << ((n%2==0) ? (a[n/2-1]+a[n/2])/2.0 : a[(n-1)/2]) << "\n";

  return 0;
}
