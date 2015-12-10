#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, input, start, end;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n,0);
  set<int> num;
  
  for(int i=0; i<n; ++i){
    cin >> input;
    a[i] = input;
    num.insert(input);
  }
  for(set<int>::iterator it=num.begin(); it!=num.end(); ++it){
    start=-1; end=-1;
    for(int j=0; j<n; ++j){
      if(a[j]==*it){
	start=j;
	break;
      }
    }
    for(int j=n-1; j>=0; --j){
      if(a[j]==*it){
	end=j;
	break;
      }
    }
    for(;start<=end; ++start) b[start]=*it;
  }
  for(int i=0; i<n; ++i){
    cout << b[i] << ' ';
  }
  cout << "\n";

  return 0;
}
