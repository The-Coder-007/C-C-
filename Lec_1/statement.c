#include <stdio.h>

int main(){
	char ac_name[10];
	
	printf("Acount holder Name");
	scanf("%s" , &ac_name);
	printf("Acount Holder :  %s\n", ac_name);
	
	double num;
	
	printf("Acount Number");
	scanf("%lf" , &num);
	printf("Acount Number :  %.0lf\n", num);
	
	double credit;
	
	printf("Enter Credit Amount");
	scanf("%lf" , &credit);
	printf("Acount credited with :  %.0lf\n", credit);
	
	double debit;
	
	printf("Enter Debit Amount");
	scanf("%lf" , &debit);
	printf("Acount Debited with :  %.0lf\n", debit);
	
	double credit1;
	
	printf("Enter Credit Amount");
	scanf("%lf" , &credit1);
	printf("Acount credited with :  %.0lf\n", credit1);
	
	double debit1;
	
	printf("Enter Debit Amount");
	scanf("%lf" , &debit1);
	printf("Acount Debited with :  %.0lf\n", debit1);
	
	double balance = (credit + credit1) - (debit + debit1);
	printf("Your acount Balance is :%.0lf" , balance);
}
