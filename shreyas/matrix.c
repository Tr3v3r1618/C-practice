#include<stdio.h>

int main() {
	char fullName[20][20] = {
		{'s', 'u', 'b', 'o', 'd', 'h'},
		{ NULL }, 
		{'m', 'o', 'o', 'n'}
	};
	
	int size = sizeof fullName / sizeof *fullName;

	for (int i = 0; i < size; i++) {
		if(fullName[i] == NULL) {
			break;
		}
		printf("%s=", fullName[i]);
	}

	return 0;
}
