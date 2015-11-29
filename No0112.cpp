#include <iostream>
using namespace std;

int main(){
  int n, input, total;
  int bSame=1;

  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> input;
    if(i==0) total=input;
    else{
      if(total==input) continue;
      else{
	total += ((total<input) ? 4 : 2);
	bSame=0;
	break;
      }
    }
  }
  if(bSame==0) cout << 2*n-total/2 << " " << total/2-n << "\n";
  else{
    (total/(n-1)==2) ? cout << n << " 0\n" : cout << 0 << " " << n << "\n";
  }
    
  return 0;
}
