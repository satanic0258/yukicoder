#include <stdio.h>

void loopAlpha(int* c){
  while(*c<'A')*c+=26;
}

int main(){
  int c;
  char S[1024]={'\0'};
  int i;

  scanf("%s", S);
  for(i=0; i<1024 && S[i]!='\0'; ++i){
    c=S[i];
    c-=i+1;
    loopAlpha(&c);
    S[i]=c;
  }

  printf("%s\n", S);

  return 0;
}
