#include <iostream>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long int n;
  vector<char> str;
  cin >> n;

  do{
    str.push_back(n%26+'A');
    n/=26;
    --n;
  }while(n!=-1);

  for(vector<char>::reverse_iterator it=str.rbegin(); it!=str.rend(); ++it){
    cout << *it;
  }
  cout << "\n";

  return 0;
}
