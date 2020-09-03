#include <stdio.h>
int main(void){
  int p, j, m, n;
  
  p = 9;
  for( j = 1; j < ①; j++ ){
    for( m = 1; m <= ②; m++ ){
      printf(" ");
    }
    for( n = 1; n <= ③; n++ ){
      printf("*");
    }
    printf(④);
    p = ⑤;
  }
  
  return 0;
}