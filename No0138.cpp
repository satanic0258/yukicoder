#include <iostream>
using namespace std;

#define READandIGNORE(a) {cin >> a; cin.ignore();}
#define SAY(s)           {cout << s << "\n";}

int main(){
  ios::sync_with_stdio(false);
  int a0, b0, c0, a1, b1, c1;

  READandIGNORE(a0);
  READandIGNORE(b0);
  READandIGNORE(c0);
  READandIGNORE(a1);
  READandIGNORE(b1);
  READandIGNORE(c1);
  
  if(a0 >  a1) {SAY("YES") return 0;}
  if(a0 <  a1) {SAY("NO")  return 0;}
  if(b0 >  b1) {SAY("YES") return 0;}
  if(b0 <  b1) {SAY("NO")  return 0;}
  if(c0 >= c1) {SAY("YES") return 0;}
  if(c0 <  c1) {SAY("NO")  return 0;}
}
