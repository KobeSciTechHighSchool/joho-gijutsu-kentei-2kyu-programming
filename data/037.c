#include <stdio.h>
int main(void){
  int i, max, min, a[10] = { 37, 20, -5, 8, 98, -32, 43, 79, 18, 60 };

  max = ①;
  min = ①;
  for( i = 1; i < ②; i++ ){
    if( max ③ a[i] ){
      max = ④;
    }
    if( min ⑤ a[i] ){
      min = ④;
    }
  }

  printf("最大値=%d\n", max );
  printf("最小値=%d\n", min );

  return 0;
}
