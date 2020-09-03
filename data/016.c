#include <stdio.h>
int total(int start, int end);
int main(void){
  int goukei;
  
  goukei = total( ①, 10 );
  printf("奇数の和 = %d\n", goukei );
  goukei = total( ②, 10 );
  printf("偶数の和 = %d\n", goukei );

  return 0;
}

int total( int start, int end ){
  int count, wa;
  
  wa = 0;
  for( count = ③; count <= ④; count = count +2 ){
    wa = wa + ⑤;
  }

  return wa;
}
