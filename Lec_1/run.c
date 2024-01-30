#include <stdio.h>

int main() {
 	char name[10];
 	
 	printf("Enter your name");
 	scanf("%s", &name);
 	printf("%s\n" , name);
 	
 	char add[10];
 	
 	printf("Enter your address");
 	scanf("%s", &add);
 	printf("%s", add);
 	
 	double num;
 	
 	printf("Enter your number");
 	scanf("%lf", &num);
 	printf("%.0lf", num);
}

