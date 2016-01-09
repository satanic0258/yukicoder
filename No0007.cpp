#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> prime(n-1);
  vector<bool> judge(n-1, false);

  for(int i=2; i<=n; ++i) prime[i-2]=i;
  for(int i=0, sqrtn=sqrt(n), erased=0; i<=sqrtn-erased; ++i){
    for(vector<int>::iterator it=prime.begin()+1+i; it<prime.end(); ++it){
      if(*it%prime[i]==0){
	if(*it<sqrtn) ++erased;
	prime.erase(it);
	--it;
      }
    }
  }
  for(vector<bool>::iterator judge_it=judge.begin(); judge_it!=judge.end(); ++judge_it){
    int check_num=(judge_it-judge.begin()+2);
    for(vector<int>::iterator prime_it=prime.begin(); prime_it!=prime.end() && *prime_it<check_num; ++prime_it){
      int tmp=check_num-*prime_it;
      if(tmp==0 || tmp==1) continue;
      if(judge[tmp-2]==false){
	*judge_it=true;
	break;
      }
    }
  }
  cout << ((judge[n-2]==true) ? "Win\n" : "Lose\n");

  return 0;
}
