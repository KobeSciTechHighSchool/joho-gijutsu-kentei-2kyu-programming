#include <stdio.h>
int main(void){
  int j, n, work;
  int a[5] = { 3, 4, 1, 5, 2 };
  
  for( j = ①; j < 4; j++ ){
    for( n = ②; n < 5; n++ ){
      if( a[j] ③ a[n] ){
        work = a[j];
        a[j] = a[n];
        a[n] = work;
      }
    }
  }
  ④( j = 0; j < 5; j++ ){
    ⑤("a[%d] = %d\n", j, a[j]);
  }
  
  return 0;
}
