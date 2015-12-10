#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int x, y;
  vector<vector<string>> a{{"Drew", "Won" , "Lost"},
                           {"Lost", "Drew", "Won" },
			   {"Won" , "Lost", "Drew"}};

  cin >> x >> y;
  cout << a[x][y] << "\n";

  return 0;
}
