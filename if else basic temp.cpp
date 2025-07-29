#include <stdio.h>
int main () {
	int temp;
	printf ("enter current temperature:");
	scanf("%d",&temp );
	if(temp<=30) {
		printf("its cold");
	} else {
		printf("its hot");
	}
	return 0;
}

