#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int dia, i, j;
char semana [7] = {'D','S','T','Q','Q','S','S'}; 

void janeiro();
void fevereiro();
void marco();

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	inicio:
	
	printf("Digite o número do mês desejado:  ");
	scanf("%d", &mes);
	
	switch(mes){
		case(1):
			janeiro();
			break;
		case(2):
			fevereiro();
			break;
		case(3):
			marco();
			break;
	}
	
	system("pause");
	system("cls");
	
	goto inicio;
	
	return 0;
}

void janeiro(){
	
	dia=0;
	i=0;
	
	printf("-------JANEIRO-------\n");
	
	while(i<8){
		printf(" %c ", semana[i]);
		i++;		
	}
	printf("\n");
	for(i=1;i<=5;i++){		
		for(j=1;j<8;j++){
			dia++;	
			if(dia<=31){
				if(dia<10){
			printf("%d |", dia);
				}else{
					printf("%d|", dia);

				}
			}	
			
			
			}
		
		printf("\n");

		}
	
}

void fevereiro(){
	
	dia=0;
	i=0;
	printf("-------FEVEREIRO-------\n");

	
	while(i<8){
		printf(" %c ", semana[i]);
		i++;		
	}
	printf("\n");
	for(i=1;i<=5;i++){		
		for(j=1;j<8;j++){
			dia++;	
			if(dia<=28){
				if(dia<10){
			printf("%d |", dia);
				}else{
					printf("%d|", dia);

				}
			}	
			
			
			}
		
		printf("\n");

		}
	
}

void marco(){
	
	dia=0;
	i=0;
	
	printf("-------MARÇO-------\n");
	
	while(i<8){
		printf(" %c ", semana[i]);
		i++;		
	}
	printf("\n");
	for(i=1;i<=5;i++){		
		for(j=1;j<8;j++){
			dia++;	
			if(dia<=31){
				if(dia<10){
			printf("%d |", dia);
				}else{
					printf("%d|", dia);

				}
			}	
			
			
			}
		
		printf("\n");

		}
	
}

