#include <stdio.h>

int main(){
  int k, l, m, n;
  int total;

  scanf("%d%d%d", &l, &m, &n);
  total=l*100+m*25+n;

  k=total/1000;
  total%=1000;
  l=total/100;
  total%=100;
  m=total/25;
  total%=25;
  n=total;

  printf("%d\n", l+m+n);

  return 0;
}
