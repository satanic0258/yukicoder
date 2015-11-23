#include <stdio.h>

int main(){
  int cup[3]={0};
  int n, m, p, q;
  int tmp;
  int i;

  scanf("%d%d", &n, &m);
  cup[n-1]=1;
  for(i=0; i<m; ++i){
    scanf("%d%d", &p, &q);
    tmp=cup[p-1];
    cup[p-1]=cup[q-1];
    cup[q-1]=tmp;
  }
  for(i=0; i<3; ++i){
    if(cup[i]==1){
      printf("%d\n", i+1);
      break;
    }
  }
  return 0;
}
