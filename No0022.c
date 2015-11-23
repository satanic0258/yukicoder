#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int left;
  int right;
}t_mate;

int main(){
  int input_n, input_k;
  char *ps;
  t_mate *pmate;
  int i, j, k;
  int checkmate;
  int ans;
  
  scanf("%d %d", &input_n, &input_k);
  ps=(char*)malloc(input_n*sizeof(char));
  pmate=(t_mate*)malloc(input_n/2*sizeof(t_mate));
  for(i=0; i<input_n/2; ++i){
    pmate[i].left=-1;
    pmate[i].right=-1;
  }
  scanf("%s", ps);
  j=0;
  k=0;
  for(i=0; i<input_n; ++i){
    switch(ps[i]){
    case '(':
      pmate[j].left=i;
      if(i==input_k-1)checkmate=j;
      ++j;
      break;
    case ')':
      k=j-1;
      while(pmate[k].right!=-1)--k;
      pmate[k].right=i;
      if(i==input_k-1)checkmate=k;
      break;
    }
  }
  ans = (pmate[checkmate].left==input_k-1) ? pmate[checkmate].right+1 : pmate[checkmate].left+1;
  printf("%d\n", ans);

  return 0;
}
