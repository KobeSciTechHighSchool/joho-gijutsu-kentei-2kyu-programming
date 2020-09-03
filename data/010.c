#include <stdio.h>
int main(void){
  int a, b, c, ①;
  
  scanf("%d %d %d", &a, &b, &c);
  d = ② - 4 * a * c;
  if( ③ ){
    printf("実数解\n");
  }
  else if( ④ ){
    printf("重解\n");
  }
  else{
    ⑤("虚数解\n");
  }
  
  return 0;
}
