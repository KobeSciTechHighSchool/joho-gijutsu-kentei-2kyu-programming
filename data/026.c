#include <stdio.h>
int main(void){
  int d[100];
  int c, sum, n;
  float avg;
  for( n = 0; n < 100; n++ ){
    scanf("%d", &d[n]);
  }
  c = ①;
  sum = 0;
  for( n = 0; n < 100 ; n++ ){
    if( d[n] ② 60 ){
      c = ③;
      sum = ④;
    }
  }
  avg = (float)⑤ / c;
  printf("60点以上の個数%d\n60点以上の平均点%f\n", c, avg );
  return 0;
}
