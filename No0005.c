#include <stdio.h>
#include <stdlib.h>

int main(){
  int l, n, tmp;
  int *pw;
  int i;
  int swap_f;
  
  scanf("%d%d", &l, &n);
  pw = (int *)malloc(n*sizeof(int));
  for(i=0; i<n; ++i){
    scanf("%d", &pw[i]);
  }

  do{
    swap_f=0;
    for(i=0; i<n-1; ++i){
      if(pw[i]>pw[i+1]){
	tmp=pw[i];
	pw[i]=pw[i+1];
	pw[i+1]=tmp;
	swap_f=1;
      }
    }
  }while(swap_f==1);

  for(i=0; i<n; ++i){
    l-=pw[i];
    if(l<0)break;
  }
  printf("%d\n", i);

  return 0;
}
