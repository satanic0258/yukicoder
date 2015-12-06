#include <iostream>
#include <string>
using namespace std;
#define OUT(s) {cout << s << "\n"; return 0;}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  string sa, sb, pa, pb;
  char tmp;

  cin >> sa >> pa >> tmp;
  cin >> sb >> pb >> tmp;
  if(pa.length()>pb.length()) OUT(sa);
  if(pa.length()<pb.length()) OUT(sb);
  if(pa.compare(pb)>0) OUT(sa);
  if(pb.compare(pa)>0) OUT(sb);
  OUT(-1);
}
