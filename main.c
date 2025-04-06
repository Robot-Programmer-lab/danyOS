#include <stdio.h>
#include <unistd.h>

int main(){
	char command[50]; // массив для ввода команды

	printf("************************Welcome to danyOS*************************\n");
	sleep(2);
	while (1 == 1){
		printf("~user$ ");
		scanf("%s", command);
		if ((command[0] == 't') &&(command[1] == 'e') && (command[2] == 's') && (command[3] == 't')){
			printf("System is OK\n");
		}
	}

	
}
