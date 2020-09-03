#include <stdio.h>
#include <math.h>
int main(void){
  int a, b, c;
  float x, y, s;
  
  printf("a, b, c = ");
  scanf("%d %d %d", &a, &b, &c );
  if( ① ){
    x = (float)(b * b + c * c - a * a ) / ( ② );
    y = ③( 1.0 - x * x );
    s = 1.0 / 2.0 * b * c * y;
    printf("面積は%f\n", ④ );
  }
  else{
    printf("三角形は成立しない\n");
  }
  
  return 0;
}
