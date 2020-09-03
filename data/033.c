#include <stdio.h>
int main(void){
  int n, kaijyo;
  
  scanf("$d", &n );
  if( n ① 0 ){
    kaijyo = ②;
    while( n > ③ ){
      kaijyo = kaijyo ④ n;
      n = n - 1;
    }
    printf("%d\n", kaijyo);
  }else{
    printf("入力エラー\n");
  }

  return 0;
}
