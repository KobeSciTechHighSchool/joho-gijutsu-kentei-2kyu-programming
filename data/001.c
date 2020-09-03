#include <stdio.h>
int main(void){
  int j, k, ans;
  
  for( j = 1; j ① 9; ② ){
    for( k = 1; k ③ 9; ④ ){
      ans = j* k;
      printf(" %2d", ans );
    }
    ⑤
  }
  return 0;
}