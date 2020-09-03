#include <stdio.h>
int main(void){
  int a, b, c;
  
  printf("入力してください a=>");
  ①("%d", &a);
  printf("入力してください b=>");
  ①("%d", &b);
  if( a < b ){
    c = a;
    a = b;
    ②;
  }
  c = a % b;
  while( ③ ){
    a = b;
    ④;
    c = a % b;
  }
  printf("最大公約数は%d\n", ⑤);

  return 0;
}
