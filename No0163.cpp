#include <iostream>
#include <vector>
using namespace std;

#define DIFF ('A'-'a')

int main(){
  ios::sync_with_stdio(false);
  vector<char> s;
  char input='\0';
  
  while(input!='\n'){
    cin.get(input);
    if(input>='a' && input <='z') input+=DIFF;
    else if(input>='A' && input <='Z') input-=DIFF;
    s.push_back(input);
  }
  for(int i=0; i<s.size(); ++i){
    cout << s[i];
  }

  return 0;
}
