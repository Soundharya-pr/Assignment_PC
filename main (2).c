#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

unsigned int isFirstOccurance(char *string, char target, unsigned int index){
	for(int i = 0; string[i]; i++)
		if(tolower(string[i]) == tolower(target))
			return index == i;
	return 0;
}

int main(){
	char string[32];
	unsigned int freqs[32] = {};
	scanf("%[^\n]", string);
	for(int i = 0; string[i]; i++)
		if(isFirstOccurance(string, string[i], i))
		printf("%c", tolower(string[i]));
}


