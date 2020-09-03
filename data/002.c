#include <stdio.h>
int main(void){
  int dat[4] = { 8, 5, 2, 3 };
  int j, p, q, tmp;
  
  for( p = 0; p < ①; p++ ){
    for( q = ② + 1 ; q < 4; q++ ){
      if( dat[p] > dat[q] ){
        tmp = dat[p];
        ③ = dat[q];
        dat[q] = ④;
      }
    }
  }
  for( j = 0; j < ⑤; j++ ){
    printf("%d\n", dat[j]);
  }
  
  return 0;
}