#include <stdio.h>

int main(){
  int item[10]={0};
  int n, input;
  int i, j, rest=0;
  int powup_cnt=0;

  scanf("%d", &n);
  for(i=0; i<n; ++i){
    for(j=0; j<3; ++j){
      scanf("%d", &input);
      ++item[input%10];
    }
  }  
  for(i=0; i<10; ++i){
    while(item[i]>=2){
      item[i]-=2;
      ++powup_cnt;
    }
    rest+=item[i];
  }
  while(rest>=4){
    rest-=4;
    ++powup_cnt;
  }
  printf("%d\n", powup_cnt);

  return 0;
}
