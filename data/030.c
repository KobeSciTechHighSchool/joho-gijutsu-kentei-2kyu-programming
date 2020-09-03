#include <stdio.h>
int main(void){
  int work, j, n;
  int a[5] = { 3, 4, 1, 5 ,2 };
  
  for( j = 1; j < ①; j++ ){
    for( n = j - 1; n >= ②; n-- ){
      if( a[n] ③ a[n+1] ){
        ④ = a[n];
        a[n] = a[n+1];
        ⑤ = work;
      }
    }
  }
  for( j = 0; j < 5; j++ ){
    printf("%d\n", ⑥);
  }
  
  return 0;
}
