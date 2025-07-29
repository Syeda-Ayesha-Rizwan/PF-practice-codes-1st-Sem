include <stdio.h>
int main(){
	int marks;
	printf("enter your marks: ");
	scanf("%d" , &marks);
	if(marks>50 ){
		printf("you passed");
		//break;
	} else {	
		if (marks>80){
			printf("your got A excellent ");
		} else {
			if (marks>70){
				printf("you got b good job ");
			} else {
				if (marks>50){
					printf("you got c work harder");
				}	else 	{
						printf("you failed !");
				}
		
		return 0;
}
}}}
