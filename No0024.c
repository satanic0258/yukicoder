#include <stdio.h>

int main(){
  int num[10]={1,1,1,1,1,1,1,1,1,1};
  int marker[10]={0};
  int n, input[4];
  char r;
  int i, j;
  
  scanf("%d", &n);
  for(i=0; i<n; ++i){
    for(j=0; j<10; ++j) marker[j]=0;
    for(j=0; j<4; ++j) scanf("%d", &input[j]);
    scanf(" %c%*s", &r);
    switch(r){
    case 'Y':
      for(j=0; j< 4; ++j) marker[input[j]]=1;
      for(j=0; j<10; ++j) num[j]*=marker[j];
      break;
    case 'N':
      for(j=0; j< 4; ++j) num[input[j]]=0;
      break;
    }
  }
  for(i=0; i<10; ++i){
    if(num[i]==1){
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
