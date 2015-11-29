#include <iostream>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int n, tmp;
  vector<int> a;
  int result=0;

  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> tmp;
    a.push_back(tmp);
  }
  for(int i=1; i<n-1; ++i){
    if(a[i-1]!=a[i+1] &&
       ((a[i]<a[i-1] && a[i]<a[i+1]) ||
	(a[i]>a[i-1] && a[i]>a[i+1])   ) ) ++result;
  }
  cout << result << "\n";

  return 0;
}
