#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, tmp;

  cin >> a >> b;
  for(int i=a; i<=b; ++i){
    if(i%3==0){
      cout << i << "\n";
    }else{
      tmp=i;
      while(tmp>0){
	if(tmp%10==3){
	  cout << i << "\n";
	  break;
	}
	tmp/=10;
      }
    }
  }

  return 0;
}
