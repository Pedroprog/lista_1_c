#include <stdio.h>

/* 3. Peça ao usuario para digitar tres valores inteiros e imprima a soma deles. */

int main() {
	int a,b,c,soma;
	printf("Digite o valor de a:  ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	printf("Digite o valor de c: ");
	scanf("%d",&c);
	soma=a+b+c;
	printf("o valor da soma e igual a: %d",soma);
	return 0;
}
