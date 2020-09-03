#include <stdio.h>
int main(void){
  int ryoukin;
  float kyori;
  
  do{
    printf("走行距離[km]は");
    scanf("%f", &kyori );
  }while( kyori ① 0 );
  ryoukin = 710;
  ② = kyori - 2.0;
  while( kyori ③ 0 ){
    ryoukin = ryoukin + ④;
    kyori = ⑤ - 0.285;
  }
  printf("金額は%d円です\n", ryoukin );
  
  return 0;
}
