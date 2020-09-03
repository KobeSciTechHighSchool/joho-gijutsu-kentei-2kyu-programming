#include <stdio.h>
int yakubun( int a, int b );
int main(void){
  int a, b, gcm, c, d;
  
  printf("b/a:分母a入力=>");
  scanf("%d", ① );
  
  printf("b/a:分子b入力=>");
  scanf("%d", &b );

  ② = yakubun( a, b );
  
  d = b/gcm;
  c = a/gcm;
  printf("%d/%d = %d/%d\n", b, a, d, ③);
  
  return 0;
}

int ④( int a, int b ){
  int x, y;
  
  x = a;
  y = b;
  while( x != y ){
    if( x > y ){
      x = x - y;
    }
    else{
      y = y - x;
    }
  }
  
  ⑤ x;
}
