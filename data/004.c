#include <stdio.h>
int total( int start, int owari );
int main(void){
  int goukei;
  
  goukei = ①(1, 100);
  printf("奇数の和%d\n", goukei);
  goukei = ①(2, 100);
  printf("偶数の和%d\n", goukei);
  
  return 0;
}

int total( int start, int ③ ){
  int cnt, wa;
  
  wa = 0;
  for( cnt = ④; cnt <= owari; cnt = cnt + 2 ){
    wa = wa + cnt;
  }
  
  ⑤ wa;
}