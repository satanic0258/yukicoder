#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int month=0, day=0, day_max=0, happy=0;

  for(month=1; month<=12; ++month){
    switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      day_max=31; break;
    case 4: case 6: case 9: case 11:
      day_max=30; break;
    case 2:
      day_max=28; break;
    }
    for(day=1; day<=day_max; ++day){
      if(month==day%10+day/10) ++happy;
    }
  }
  cout << happy << "\n";

  return 0;
}
