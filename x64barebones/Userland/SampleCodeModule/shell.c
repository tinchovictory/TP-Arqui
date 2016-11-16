#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "myGame.h"

void clearScreen();

void processComand(char * buffer){
	if (!strcmp(buffer,"help")){
		printf("  echo : print on screen\n");
		printf("  hola : saludo de la consola\n");
		printf("  2048game : Juego 2048\n");
	}
	else if(startsWith("echo ",buffer)){
		puts(buffer+5);
	}
	else if(!strcmp(buffer,"hola")){
		puts("  Hola! Mi nombre es NetSky");
	}else if(!strcmp(buffer,"2048game")){
		game2048();
	}
	else if(!strcmp("clear",buffer)){
		clearScreen();
	}
	else{
		puts("  Command not found - help for instructions");
	}
}


void shell(){

	char buffer[100];
	int i=0;
	while(1){
		char c;
		printf("$> ");
		while ((c=getchar())!= '\n'){
			if(c != '\b'){
				buffer[i++]=c;
				putchar(c);
			}else if (i>0){
				i--;
				putchar(c);
			}	
		}
		putchar(c);
		buffer[i]=0;
		processComand(buffer);
		i=0;
	}
	

}