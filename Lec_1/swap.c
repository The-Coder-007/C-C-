#include <stdio.h>

int main(){
	// swap using 3rd var
	
	int a = 5, b = 10, c;
	
	printf("before swap\n a = %d \n b = %d" , a, b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\nafter swap\n a = %d \n b = %d", a, b);
	
	
	// swap without using 3rd var
	
	int x = 10, y = 5;
	
	printf("\nbefore swap\n x = %d \n y = %d", x,y);
	
	x = x + y; // 15
	y = x - y; // 10
	x = x - y ; // 5 
	
	printf("\nAfter swap\n x = %d \n y = %d", x,y);
}
