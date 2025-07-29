#include <stdio.h>
int main()
{
	int number ;
	printf("enter your number : ");
	scanf("%d",&number);

switch (number%2) {
    case 1: 
   for( number=1 ;number<=10; number++ ){
    printf("%d\n", number );	
	}
	break;
    case 0:
    	for( number="%d" ;number>=0; number-- ){
 printf("%d\n", number); 
}
 break;
   
    default: printf("invalid");
    return 0;

}
}
