#include <stdio.h>
int main(void){
  int dat[10] = { 78, 67, 43, 98, -1, 88, 78, 65, 48, 90 };
  int i, n, ①;
  float ②;
  
  sum = 0;
  n = 0;
  for( i = 0; i < 10; i++ ){
    if( dat[i] ③ 0 ){
      sum = sum + dat[i];
      ④;
    }
  }
  ave = (float)sum / n;
  printf("合計=%d  平均=⑤\n", sum, ave);
  
  return 0;
}
