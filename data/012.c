#include <stdio.h>
int main(void){
  float dat[6] = { 6.8, 6.7, 7.9, 7.1, 7.2, 7.4 };
  int rank[6] = { 2, 1, 6, 3, 4, 5 };
  int k, n;
   
  for( n = 1; n ① 6; n++ ){
    for( k = 0; k ② 6; k++ ){
      if( ③ == rank[k] ){
        printf("%d位　%dコース　%.1f秒\n", n, ④, ⑤);
      }
    }
  }
  
  return 0;
}
