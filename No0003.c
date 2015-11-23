#include <stdio.h>
#include <stdlib.h>

#define PR(s) printf("%s\n",s);

typedef struct{
  int exist_f;
  int minus_f;
  int prev;
}t_status;

int fnCheckOneNum(int n){
  int result=0;
  while(n>0){
    if(n%2==1) ++result;
    n/=2;
  }
  return result;
}

int main(){
  int n;
  int now=1, d;
  t_status *pStatus;
  int depth=1, depth_min=10000;
  int prev;
  int j;
    
  scanf("%d", &n);
  pStatus=(t_status*)malloc((n+13)*sizeof(t_status));
  for(j=0; j<n; ++j){
    pStatus[j].exist_f=0;
    pStatus[j].minus_f=0;
  }
  pStatus[0].prev=-1;
  while(now>=1){
    printf("%d->\n",now);
    printf("pStatus[%d].exist_f=%d\n",now,pStatus[now-1].exist_f);
    printf("pStatus[%d].minus_f=%d\n",now,pStatus[now-1].minus_f);
    printf("pStatus[%d].prev   =%d\n",now,pStatus[now-1].prev);
    //    fgetc(stdin);
    d=fnCheckOneNum(now);
    if(now>=n){                         PR("over")
      if(now==n){
	if(depth_min>depth)depth_min=depth;
      }
      
      pStatus[now-1].minus_f=1;
      prev=now;
      now-=d;
      if(now==n){
	if(depth_min>depth)depth_min=depth;
      }
    }
    else if(pStatus[now-1].exist_f==1){        PR("existed")
      now=pStatus[now-1].prev;
      --depth;
    }
    else if(pStatus[now-1].exist_f==0){       PR("non exist")
      prev=now;
      pStatus[now-1].exist_f=1;
      now+=d;
      pStatus[now-1].prev=prev;
      ++depth;
    }
    else if(pStatus[now-1].minus_f==0){       PR("minus")
      pStatus[now-1].minus_f=1;
      prev=now;
      now-=d;
      //pStatus[now-1].prev=prev;
      ++depth;
    }
    else if(pStatus[now-1].minus_f==1){        PR("searched")
      now=pStatus[now-1].prev;
      --depth;
    }
    
    printf("next:%d\n",now);
  }
  printf("\n");

  if(depth==-1)depth=-1;
  printf("%d\n", depth_min);

  return 0;
}
