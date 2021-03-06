#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
	return *(char*)a - *(char*)b;
}

int main(){
	char string[32];
	scanf("%[^\n]", string);
	qsort(string, strlen(string), sizeof(char), cmp);
	for(int i = 0; string[i]; i++)
		if(string[i] != string[i+1] && !isspace(string[i]))
			printf("%c", string[i]);
}

