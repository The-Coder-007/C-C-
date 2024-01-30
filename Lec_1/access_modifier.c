#include <stdio.h>

int main(){
	
	char a[10];
	
	printf("Enter Your name");
	scanf("%s", &a);
	printf("%s\n", a);
	
	char add[10];
	
	printf("Enter Your Address");
	scanf("%s", &add);
	printf("%s\n", add);
	
	double num ;
	
	printf("Enter Your Phone");
	scanf("%lf", &num);
	printf("%.0lf\n", num);
}
