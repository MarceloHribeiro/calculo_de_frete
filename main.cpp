#include<stdio.h>

int main(){

  int cod_estado,peso;
  float preco,frete;

	printf("|Cod. - Estado   |\n");
	printf("|1-São Paulo     |\n");
	printf("|2-Minas Gerais  |\n");
	printf("|3-Paraná        |\n");
	printf("|4-Santa Catarina|\n");
	printf("|5-Rio de Janeiro|\n");

  printf("\nDigite o código do estado desejado: ");
  scanf("%d",&cod_estado);
  printf("Peso produto: ");
  scanf("%d",&peso);

  if(peso<=5)
    preco=peso*10;
  else if(peso<=21)
    preco=peso*25;
  else
    preco=peso*30;

  printf("Valor cobrado por peso: R$%.2f\n",preco);
  printf("Estado de origem: ");

  if(cod_estado==1){
    printf("São Paulo\n");
    frete = preco*1.35;
  }
  else if(cod_estado==2){
    printf("Minas Gerais\n");
    frete = preco*1.05;
  }
  else if(cod_estado==3){
    printf("Paraná\n");
    frete = preco*1.15;
  }
  else if(cod_estado==4){
    printf("Santa Catarina\n");
    frete = preco*1.10;
  }
  else
    printf("Rio de Janeiro\n");
  printf("Valor da frete: R$%.2f\n",frete);
}
