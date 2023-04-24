#include<stdio.h>
#include<string.h>
int main(){
  char frase[100], letra;
  int i, tamanho, cont;
  
  printf("====================\nCONTADOR DE LETRAS\n====================");
  
  printf("\n\nDigite uma frase de de no maximo 100 caracteres:");
  gets(frase);
  
  printf("Digite a letra que vc quer contar:");
  scanf("%s", &letra);
  
  tamanho = strlen(frase);
  
  i = 0;
  cont = 0;
  
  while(i <= tamanho){
  
  if(frase[i] == letra){
  	cont = cont+1;
  	
		
  	
  }
i++;
  }
  	printf("A letra '%c' apareceu %d vezes na sua frase", letra, cont);  	
  	
  	
	
	
	
	
}
