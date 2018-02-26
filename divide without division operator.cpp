//This program divides without the division operator
#include <stdio.h>

main(){
	double dividend=0.00;//that same
	double divider=0.00;//that same
	double sub=0.00; //number of sustraccions of the dividend minus divider
	int sign =0; //if sign is 1, the result is negative
	
	
	printf ("Introduce the dividend\n");
	scanf ("%lf", &dividend);
	do{
	printf ("Introduce the divider\n");
	scanf ("%lf", &divider);
	}
	while (divider==0); //You cant divide by zero, so the program doesnt accept it, it will ask again
	
	//check the signs
	if (dividend>0 && divider<0){ //if divider is negative, change it to positive, the final result will be negative
		sign =1;//this will change it to positive
		divider=-divider;
	}
	if (dividend<0 && divider>0){//if dividend is negative, change it to positive, the final result will be negative
		sign =1; //this will change it to positive
		dividend=-dividend;
	}
	if (dividend<0 && divider<0){//if both are negative, change them to positive, the final result will be positive
		dividend=-dividend;
		divider=-divider;
	}
	
	dividend = dividend*1e3; // 1e3 is 1*1000, I multiplicate because i want the first 3 decimals in the integer part
	
	while (dividend>=divider){ //while dividend is bigger than divider, substract c times the divider
		sub=sub+1;
		dividend=dividend-divider;
	}
	sub=sub*1e-3; // 1e-3 is equal to 1*0.001, used to restore the result to the original numbers
	if (sign==1){ //if sign is 1, the number has to be negative
		sub=-sub;
	}
	//prints number
	printf ("%lf", sub);
}
