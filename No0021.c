#include <stdio.h>

int main(){
  int n, k, tmp;
  int i;
  int max, min;
  
  scanf("%d%d", &n, &k);
  for(i=0; i<n; ++i){
    scanf("%d", &tmp);
    if(i==0){
      max=tmp;
      min=tmp;
    }else{
      if(max<tmp) max=tmp;
      else if(min>tmp) min=tmp;
    }
  }
  printf("%d\n", max-min);

  return 0;
}
