#include <stdio.h>
int main(void){
  int kin, c10, c5, c1;
  
  printf("金額を入力？");
  ①("%d", &kin);
  c10 = kin / ②;
  kin = kin % ③;
  c5 = ④ / 5;
  c1 = kin % ⑤;
  printf("10円玉の個数=%d\n", c10);
  printf("5円玉の個数=%d\n", c5);
  printf("1円玉の個数=%d\n", c1);
  
  return 0;
}
