#include<stdio.h>
int main(){
	int days;
	char name[20]; //string
	printf("enter your name: ");
	scanf ("%s" , name);
	printf("enter number of late days: ");
	scanf("%d", &days);
	
	if(day>=1 && day<=5){
	
	printf("your fine is Rs. %d",days*5 );
	else if (6<=10){
		printf ("your fine is Rs.%d",days*10 );
	}
	else {
		printf("rs 50 per day and member ship cancel");
		
	}
	}
	return 0;
}

