#include <stdio.h>
int main(void){
  int x[5], i, j;
  
  for( i = 0; i < 5; i++ ){
    printf("%d個目のデータを入力 = ", ①);
    ②("%d", &x[i]);
  }
  printf("\n");
  ③( i = 0; i < 5; i++ ){
    for( j = 0; j < ④; j++ ){
      printf("■");
    }
    printf("⑤");
  }

  return 0;
}
