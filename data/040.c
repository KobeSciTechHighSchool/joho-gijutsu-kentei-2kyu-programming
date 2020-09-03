#include <stdio.h>
int cube( int a );
float cylinder( int a );

int main(void){
  int a;
  float v;
  
  printf("aの長さを入力してください。\n");
  scanf("%d", ②);
  v = ②( a ) + cylinder( a );
  printf("体積は%f\n", ③ );
  
  return 0;
}

int cube( int x ){
  int taiseki;
  
  taiseki = x * x * x;
  
  return ④;
}

float cylinder( int x ){
  float taiseki;
  
  taiseki = 3.14159 * x /2.0 * x / 2.0 * x;
  
  return taiseki;
}
