#include <stdio.h>
int main(void){
  int g, k, n, r;
  
  g = ①;
  k = ①;
  for( n = 1; n <= 25; n++ ){
    r = n % ②;
    if( r == ③ ){
      g = g + ④;
    }
    else{
      k = k + ④;
    }
  }
  printf("偶数の和%d\n", g );
  printf("奇数の和%d\n", k );
  
  return 0;
}
