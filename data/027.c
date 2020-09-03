#include <stdio.h>
#include <math.h>
int main(void){
  float a, b, c, d, x1, x2;
  
  scanf("%f %f %f", &a, &b, &c);
  d = ①;
  if( ② ){
    x1 = (③)/( 2.0 * a );
    x2 = (④)/( 2.0 * a );
    printf("x=%f\n", x1 );
    printf("x=%f\n", x2 );
  }
  if( ⑤ ){
    x1 = -b / ( 2.0 * a );
    printf("x=%f\n", x1 );
  }
  if( ⑥ ){
    printf("実数解なし\n" );
  }
  return 0;
}
