#include"stdio.h"
int sum(){
	int a,b;
	printf("\nEnter the two numbers : ");
	scanf("%d%d",&a,&b);
	printf("\nThe sum is %d",a+b);
	return 0;
}
int diff(){
	int a,b;
	printf("\nEnter the first numbers : ");
	scanf("%d",&a);
	printf("\nEnter the second numbers : ");
	scanf("%d",&b);
	printf("\nThe difference is %d",a-b);
	return 0;
}
int prod(){
        int a,b;
        printf("\nEnter the two numbers : ");
        scanf("%d%d",&a,&b);
        printf("\nThe product is %d",a*b);
        return 0;
}
int main(){
	char ch;
	printf("\t\tCal");
	printf("\n\tFor sum       \t---- s");
	printf("\n\tFor difference\t---- d");
	printf("\n\tFor product   \t---- p");
	printf("\n\nEnter your choice : ");
	scanf("%c",&ch);
	switch(ch){
		case 's':
			sum();
			break;
		case 'd':
			diff();
			break;
		case 'p':
                        prod();
                        break;
		default:
			printf("\n\tInvalid Entry.");
			break;
	}
}
