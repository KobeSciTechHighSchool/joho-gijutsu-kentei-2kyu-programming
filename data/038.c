#include <stdio.h>
int main(void){
  int i, a, b, n, r, comb;
  
  a = ①;
  b = ①;

  printf("n=");
  scanf("%d", &n );
  printf("r=");
  scanf("%d", &r );
  for( i = 2; i <= ②; i++ ){
    a = a * i;
  }
  for( i = 2; i <= r; i++ ){
    b = b * ③;
  }
  for( i = 2; i <= (n-r); i++ ){
    ④ = ④ * i;
  }
  ⑤ = a / b;
  printf("%d個の中から%d個を取り出す組み合わせ = %d通り\n", n, r, comb );
    
  return 0;
}
