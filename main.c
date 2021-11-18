#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	float balance =23440.653;
	float amount;
	char temp[10];
	
int main(int argc, char *argv[]) {
	
	
	//Menu
	//Withdraw-> Retirar
	//Deposit -> Depositar
	//Saldo
	//Exit
	
	//user Static data
	int pin = 1234;
	int accountId = 8080;
	
	//User
	int userPin;
	int menuOption = 0;
	int userAccounrId = 0;
	
	void menu () {
		printf("************Menu**************\n");
		printf("1. Retirar \n");
		printf("\n");
		printf("2. Deposito \n");
		printf("\n");
		printf("3. Consultar saldo \n");
		printf("\n");
		printf("4. Exit \n");
		printf("\n****************************\n");
		printf("\nClick na tecla correspondem a Opcao\n");
		fgets(temp,10,stdin);
	}
	
	
	//Receber os dados do usuário
	
	printf("Introduza o numero de conta \n");
	scanf("%i", &userAccounrId);
	
	printf("Introduza o seu Pin \n");
	scanf("%i", &userPin);
	

	
	
		void balanceAccount(){
			printf("Saldo atual: %f \n\n", balance, "kz");
		}
	//Retirar
	int withdraw(float amount){
		
		if(balance >= amount) {
			balance -= amount;
			
			balanceAccount();
			amount = 0; 
		}else{
			return printf("Impossivel realizar operacao saldo inferior que %f", balance, "kz");
		}
		
	}
	
	//Depositar
	int Deposit(float amount){
		balance += amount;
		balanceAccount();
	}


	if(userPin == pin && userAccounrId == accountId){

		do{
			menu();
			
			scanf("%i", &menuOption);
			system("cls");
		switch(menuOption){
			case 1:
				//system("cls");
				printf("Quantidade desejada \n");
				scanf("%f", &amount);	
				withdraw(amount);
			break;
			case 2: 
				balanceAccount();
				printf("Informe a Quantidade Desejada. \n"); 
				scanf("%f", &amount);
				Deposit(amount);
				
			break;
			case 3: //Check balance
					balanceAccount();
			break;
			case 4: 
				//system("cls");
				printf("Exit"); break;
			default:
				printf("Esta opcao nao existe!");
		}
		
		}while(menuOption != 4);
		
		
	
	}else{
		printf("Need login!");
	}

	return 0;
}
