#include <stdio.h>
int main(void){
  int a, b, n, r, cnt1, cnt2, combi;
  
  a = ①;
  b = 1;
  printf("n =");
  scanf("%d", &n );
  printf("r =");
  scanf("%d", &r );
  for( cnt1 = 2; cnt1 <= ②; cnt1++ ){
    a = ③;
  }
  for( cnt2 = r; cnt2 > 1; ④ ){
    b = b * cnt2;
  }
  for( cnt2 = ⑤; cnt2 > 1; cnt2-- ){
    b = b * cnt2;
  }
  combi = a / b;
  printf("%d個から%d個とる組み合わせは%d通り\n", n, r, combi);
  
  return 0;
}