#include <iostream>
#include <cmath>
using namespace std;

#define MOD 1000003

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  long long int x, n, a, s, x_t, a_t, total=0, total_t;

  cin >> x >> n;
  if(x==1){
    for(int i=0; i<n; ++i) cin >> a;
    cout << n << "\n";
    return 0;
  }else{
    for(int i=0; i<n; ++i){
      cin >> a;
      total_t=1;
      a_t=a;
      x_t=x;
      while(a_t!=0){ //繰返し自乗法
	if(a!=a_t){
	  x_t=x_t*x_t;
	  x_t%=MOD;
	}
	s=a_t%2;
	a_t/=2;
	total_t*=pow(x_t, s);
	total_t%=MOD;
      }
      total+=total_t;
      total%=MOD;
    }
    cout << total << "\n";
    return 0;
  }
}
