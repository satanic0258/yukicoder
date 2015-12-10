#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define IMPOS {cout << "impossible\n"; return 0;}
#define POS   {cout << "possible\n";   return 0;}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> w(n);
  int total=0;

  for(int i=0; i<n; ++i){
    cin >> w[i];
    total+=w[i];
  }
  if(total%2==1) IMPOS;
  sort(w.begin(), w.end());
  if(total/2<w.back()) IMPOS;
  vector<bool> pattern(total/2, false);
  pattern[w[0]-1]=true;
  for(vector<int>::iterator w_it=w.begin()+1; w_it!=w.end(); ++w_it){
    vector<int> true_pattern;
    true_pattern.push_back(*w_it);
    for(vector<bool>::iterator pa_it=pattern.begin(); pa_it!=pattern.end(); ++pa_it){
      if(*pa_it==true){
	if(((pa_it-pattern.begin()+1)+*w_it)<=total/2){
	  true_pattern.push_back( (pa_it-pattern.begin()+1)+*w_it );
	}
      }
    }
    for(vector<int>::iterator true_it=true_pattern.begin(); true_it!=true_pattern.end(); ++true_it){
      pattern[(*true_it)-1]=true;
    }
  }
  if(pattern[total/2-1]==true) POS;
  IMPOS;
}
