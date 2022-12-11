//MARCUS_EMMANUEL_514067

#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//Variaveis que podem ser usadas
   	unsigned int x[200];
   	int y = 0;
   	int i = 0;
   	
   	//#########################
   	for(i=0;i<=200;i++)
        x[i]=0;
      
    i = y = 0;
	//limitacao de entrada//
	printf("INSIRA QUALQUER NUMERO INTEIRO DE 0 A 5000 E -1 PARA PARAR: \n");
	
	//Enquanto o usuatio nao digitar -1 pra parar, vai continuar armazenando numeros//	
    while (y != -1)
    {
    scanf("%i",&y);
	
	//checa se y nao eh igual a -1 ou maior que 5000//
	if((y != -1) && (y <= 5000)){
	//percorre o vetor armazenando os valores digitados em cada bit//
	   x[y/32] = x[y/32] | (1<<(y%32));
	}
	}
		
	printf("OS NUMEROS EM ORDEM CRESCENTE: \n");
    
    //percorre o vetor em ordem crescente e mostra os valores na tela//
    for(i=0;i<=200;i++)
    {	
    for(y=0;y<32;y++)
    {
    if((x[i]&(1<<y)) != 0)
    {
        //mostra os valores em decimal//
        printf("\n%i",((i*32)+y));
    }
    }
    }
   	//#########################
   
	return 0;  
}
