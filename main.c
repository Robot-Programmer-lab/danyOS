#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
	char command[50]; // массив для ввода комманды
	char* time_start;                                                               
	time_t t = time(NULL);                                                        
	time_start = ctime(&t);               

	printf("************************   Welcome to danyOS   *************************\n");
	
	while (1 == 1){
		printf("~user$ ");
		scanf("%s", command);
		if ((command[0] == 't') &&(command[1] == 'e') && (command[2] == 's') && (command[3] == 't')){
			printf("System is OK\n");
		}
		else if ((command[0] == 'd') &&(command[1] == 'a') && (command[2] == 't') && (command[3] == 'e') && (command[4] == 't') && (command[5] == 'i') && (command[6] == 'm') && (command[7] == 'e')){                                       
			t = time(NULL);
            time_start = ctime(&t);                                                                     
			printf("%s", time_start);       
		}
		/*
		else if((command[0] == "N") && (command[1] == "I") && (command[2] == "P")){ // работа с NIP
			printf("package NIP readding...\n");

			FILE *nip_file;
			nip_file = fopen("NIP.txt","r");			
			scanf("%s", command);
			if ()
		}
		*/
		else if((command[0] == 'c') &&(command[1] == 'a') && (command[2] == 'l') && (command[3] == 'c')){
			long long int number1 = 0;
			long long int number2 = 0;
			char calc_command[1];
			printf("Input first number: ");
			scanf("%d", &number1);
			printf("Input second number:");
			scanf("%d", &number2);
			printf("Input command (+, -, /, *): ");
			scanf("%s", calc_command);
			if (calc_command[0] == '+'){
				printf("Result = %d\n", number1 + number2);
			}
			else if (calc_command[0] == '-'){
				printf("Result = %d\n", number1 - number2);
			}
			else if (calc_command[0] == '*'){
				printf("Result = %d\n", number1 * number2);
			}
			else if (calc_command[0] == '/'){
				printf("Result = %d\n", number1 / number2);
			}	
			else{
				printf("Wrong command!\n");
			}	
		}
		else if((command[0] == 't') &&(command[1] == 'i') && (command[2] == 'm') && (command[3] == 'e') && (command[4] == 'r')){
			int timer_time = 0;
			printf("Timer successfully!\n");
			printf("Input time in minutes: ");
			scanf("%d", &timer_time);
			timer_time = timer_time * 60;		
			printf("To continue, press any key\n");
			getchar();	
			printf("Timer start!\n");			
			for (int i = 0; i < timer_time; i++){												
				timer_time = timer_time - 1;
				printf("Timer: %d\n",timer_time);
				sleep(1);
			}
			printf("\nTime is up!\n");
		}		                             
		else{
			printf("No such command!\n");
		}		
	}	
	return 0;
}	
