#include <iostream>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int n, l;
  vector<int> level(6, 0);
  int result, bEnd;
  
  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> l;
    ++level[l-1];
  }
  while(bEnd==0){
    bEnd=1;
    for(int i=0; i<6; ++i){
      if(level[i]>0){
	result=i+1;
	--level[i];
	bEnd=0;
      }
    }
  }
  cout << result << "\n";

  return 0;
}
