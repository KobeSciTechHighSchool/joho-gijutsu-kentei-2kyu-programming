#include <stdio.h>
int main(void){
  int m, n, temp;
  int a[10] = { 27, 30, 1, 8, 99, 50, 45, 69, 18, 60 };
  for( m = 0; m < ①; m++ ){
    for( n = ②; n < 10; n++ ){
      if( a[m] ③ a[n] ){
        temp = a[n];
        a[n] = a[m];
        a[m] = ④;
      }
    }
  }
  for( m = 0; m < 10; m++ ){
    printf("a[%d]=%d\n", m, ⑤ );
  }
  
  return 0;
}
