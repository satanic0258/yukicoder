#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF (1<<15)

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> s(n);
  for(int i=0; i<n; ++i){
    cin >> s[i];
  }
  int m;
  cin >> m;
  vector< vector<int> > c(n, vector<int>(n, INF));
  for(int i=0; i<m; ++i){
    int a, b, input_c;
    cin >> a >> b >> input_c;
    c[a][b] = c[b][a] = input_c;
  }
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      for(int k=0; k<n; ++k){
	int tmp = c[j][i]+c[i][k];
	if(c[j][k] > tmp){
	  c[j][k] = tmp;
	}
      }
    }
  }

  int result=INF;
  for(int i=1; i<n-1; ++i){
    for(int j=1; j<n-1; ++j){
      if(i==j) continue;
      int tmp = c[0][i]+s[i]+c[i][j]+s[j]+c[j][n-1];
      if(result > tmp){
	result = tmp;
      }
    }
  }

  cout << result << "\n";

  return 0;
}
