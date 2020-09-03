#include <stdio.h>
int main(void){
  int dat[5], sum, i;
  float avg;
  
  sum = ①;
  for( i = 0; i < ②; i++ ){
    printf("%dつめのデータを入力？", i+1);
    scanf("%d", ③);
    sum = ④ + dat[i];
  }
  ⑤ = (float)sum / 5.0;
  
  for( i = 0; i < ②; i++ ){
    printf("%f\n", (float)dat[i] - avg );
  }
  
  return 0;
}
