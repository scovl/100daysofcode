#include "utils.h"
#include <stdio.h>

void clear_buffer(void){
	int c;
	while ((c =  getchar()) != '\n' && c != EOF){}
}

void print_welcome_message(void){
	printf("Welcome to my project!\n");
}
