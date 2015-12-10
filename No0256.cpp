#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> n;
  int input;
  vector<int>::iterator it;
  
  while((input=cin.get())!='\n') n.push_back(input-0x30);
  sort(n.begin(), n.end());
  it=n.end();
  while(it!=n.begin()){
    --it;
    cout << *it;
  }
  cout << "\n";

  return 0;
}
