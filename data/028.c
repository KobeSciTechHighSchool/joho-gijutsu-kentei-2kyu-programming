#include <stdio.h>
int main(void){
  int t[10] = { 100, 90, -1, 100, -2, 80, 90, 0, 50, 40 };
  int n, m, sum;
  float avg;
  
  sum = 0;
  m = ①;
  for( n = 0; n < 10; n++ ){
    if( ② ){
      sum = ③;
      m = m + 1;
    }
  }
  avg = (float)④;
  printf("合計=%f\n", sum );
  printf("平均=%f\n", avg );
  return 0;
}
