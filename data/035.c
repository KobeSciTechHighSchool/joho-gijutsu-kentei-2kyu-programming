#include <stdio.h>
#include <math.h>
int main(void){
  int x;
  float a, pai;
  
  pai = 3.14159;
  printf("  x  sin(x) cos(x) tan(x)\n");
  for( x = 0; x <= 180; ① ){
    a = pai * ②;
    printf("%3d ", x );
    printf("%6.3f ", sin( ③ ) );
    printf("%6.3f ", cos( ③ ) );
    if( x ④ 90 ){
      printf("%6.3f\n", tan( ③ ) );
    }
    ⑤{
      printf("------\n");
    }
  }
  
  return 0;
}
