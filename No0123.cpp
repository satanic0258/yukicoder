#include <iostream>
#include <list>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int n, m, input;
  list<int> card;
  list<int>::iterator it;
  
  cin >> n >> m;
  for(int i=1; i<=n; ++i) card.push_back(i);
  for(int i=0; i<m; ++i){
    cin >> input;
    it = card.begin();
    for(int j=0; j<input-1 ;++j) ++it;
    input=*it;
    card.erase(it);
    card.push_front(input);
  }

  cout << card.front() << "\n";

  return 0;
}
