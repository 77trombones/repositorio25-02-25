#include <stdio.h>

int main(void) {
float nota;

  printf("Digite uma nota [0-10]: ");
  scanf("%f", &nota);

  if( nota >= 9 ) {
  printf("Nota: A");
  return 0;
}
  if( nota >= 8 ) {
  printf("Nota: B");
  return 0;
}
  if( nota >= 7 ) {
  printf("Nota: C");
  return 0;
}
  if( nota >= 6 ) {
  printf("Nota: D");
  return 0;
}
  if( nota >= 0) {
  printf("Nota: F");
  return 0;
}
}