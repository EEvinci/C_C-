#include<stdio.h>
#include<string.h>

char op[80];

int main(){
	int i = 0;
	while((op[i] = getchar()) != '\n'){
		i++;
	}	
	op[i] = '\0';
	
	for(int i = 0; op[i] != '\0'; i++){
		op[i] = op[i] - '0';
	}
	
	puts(op);
	
	return 0;
} 

