#include <stdio.h>
int main(void){
  int kin, c500, c100, ①, c10, c5, c1;
  
  printf("金額を入力？");
  scanf("%d", ② );
  c500 = ③ / 500;
  kin = kin % ④;
  c100 = kin / 100;
  kin = kin % 100;
  c50 = kin / 50;
  kin = kin % 50;
  c10 = kin / 10;
  kin = kin % 10;
  c5 = kin / 5;
  c1 = kin % ⑤;
  printf("500円効果の枚数=%d\n", c500 );
  printf("100円効果の枚数=%d\n", c100 );
  printf(" 50円効果の枚数=%d\n", c50 );
  printf(" 10円効果の枚数=%d\n", c10 );
  printf("  5円効果の枚数=%d\n", c5 );
  printf("  1円効果の枚数=%d\n", c1 );

  return 0;
}
