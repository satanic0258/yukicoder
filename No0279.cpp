#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int t=0, r=0, e=0, tree=0;
  char tmp;
  
  while((tmp=cin.get())!='\n'){
    switch(tmp){
    case 't': ++t; break;
    case 'r': ++r; break;
    case 'e': ++e; break;
    }
  }

  while(t>0 && r>0 && e>1){
    ++tree;
    --t;
    --r;
    e-=2;
  }

  cout << tree << "\n";

  return 0;
}
