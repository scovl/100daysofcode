#include "utils.h"
#include <stdio.h>

void clear_buffer(){
	int c;
	while ((c =  getchar()) != '\n' && c != EOF){}
}

void print_welcome_message(){
	printf("Welcome to my project!\n");
}
