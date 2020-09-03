#include <stdio.h>
int main(void){
  int a, b, r1, r2, n;
  
  scanf("%d", &a);
  scanf("%d", &b);
  n = b;
  while( ① ){
    r1 = a % n;
    r2 = ②;
    if( r1 == 0 ③ ④ ){
      printf("最大公約数 %d\n", n);
      break;
    }
    ⑤
  }
  
  return 0;
}
