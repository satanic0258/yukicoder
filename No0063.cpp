#include <iostream>
using namespace std;

int main(){
  int l=0, k=0;
  cin >> l >> k;

  if(l%2==1) l=l/2/k;
  else{
    if((l/2)%k==0) l=l/2/k-1;
    else l=l/2/k;
  }

    cout << l*k << endl;
  return 0;
}
