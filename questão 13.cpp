#include <stdio.h>
#include <math.h>

int main(void) {  
  float a, b, c, x1, x2, delta;

  printf("Digite o valor de A: \n");
  scanf("%f", &a);

  printf("Digite o valor de B: \n");
  scanf("%f", &b);

  printf("Digite o valor de C: \n");
  scanf("%f", &c);

  if(a == 0){
    printf("Não é uma equação do segundo grau!");
    return 0;
  }
  delta = (b * b) - 4 * a * c;

  if(delta < 0){
    printf("Não existe raiz real!");
    return 0;
  }
  
  x1 = (-b + sqrt(delta)/ 2 * a );
  x2 = (-b - sqrt(delta)/ 2 * a);
if(delta == 0){
    printf("A equação possui apenas uma raiz real: %.2f", x1);
    return 0;
  }else{
    printf("O valor de x1 é: %.2f\n", x1);
    printf("O valor de x2 é: %.2f\n", x2);
    printf( "A equação possui duas raizes reais: %.2f e %.2f\n", x1,x2);
  } 
  
  
    

  
  return 0;
}