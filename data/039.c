#include <stdio.h>
int main(void){
  int i, n, money;
  int deno[10] = { 10000, 5000, 2000, 1000, 500, 100, 50, 5, 1 };

  printf("金額を入力して下さい。");
  scanf("%d", ①);
  for( i = ②; i < 10; i++ ){
    n = money / ③;
    money = ④ % deno[i];
    printf("%d円札・硬貨の枚数%d\n", deno[i], ⑤);
  }
  
  return 0;
}
