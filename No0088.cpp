#include <iostream>
using namespace std;

int main(){
  char tmp;
  int result;
  int w=0, b=0, end=0;

  cin.get(tmp);
  result = (tmp=='y') ? 1 : -1;
  while(tmp!='\n') cin.get(tmp);
  
  while(end<8){
    cin.get(tmp);
    switch(tmp){
    case 'w' : ++w;   break;
    case 'b' : ++b;   break;
    case '\n': ++end; break;
    }
  }
  result *= (w%2==0) ? 1 : -1;
  result *= (b%2==0) ? 1 : -1;
  cout << ( (result==1) ? "yukiko\n" : "oda\n");
  
  return 0;
}
