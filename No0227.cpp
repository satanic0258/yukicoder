#include <iostream>
#include <vector>
using namespace std;

#define SAY(s) {cout << s << "\n"; return 0;}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int input;
  vector<int> card(13, 0);
  int two_cnt=0, three_cnt=0;

  for(int i=0; i<5; ++i){
    cin >> input;
    ++card[input-1];
  }
  for(int i=0; i<13; ++i){
    if(card[i]==2)      ++two_cnt;
    else if(card[i]==3) ++three_cnt;
  }
  if(three_cnt==1 && two_cnt==1) SAY("FULL HOUSE");
  if(three_cnt==1 && two_cnt==0) SAY("THREE CARD");
  if(three_cnt==0 && two_cnt==2) SAY("TWO PAIR");
  if(three_cnt==0 && two_cnt==1) SAY("ONE PAIR");
  SAY("NO HAND");
}
