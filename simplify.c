#include<stdio.h>

//Write the function called simplify, which makes the denominator and denominator values of the simple fraction sent to it as simple as possible, 
//together with a main function where the denominator and denominator values are entered from the keyboard. 
//Print the values of the variables that hold the numerator and denominator values entered from the keyboard 
//before sending them to the function and the changed states after they are sent to the screen. 
//(Global variable should not be used and should also return 1 if the simplify function was simplified and zero (0) if it could not be done.)

int simplify(int a,int b){
	
	
	int max=a;
	int min=b;
	if(b>a){
		max=b;
		min=a;
	}
	int i=2,count=0;
	for(;i<=min;i++){
		if(a%i==0&&b%i==0){
			a=a/i;
			b=b/i;
			count++;
		}
		else{
			i++;
		}
		i--;
	}
	
	if(count==0){
		return 0;
	}
	else{
		printf("Simplified version of fraction:%d / %d",a,b);
	
		return 1;
	}
	
	
}
int main(){
	
	int c,d;
	printf("Enter the numerator and denominator of the fraction:\n");
	scanf("%d%d",&c,&d);
	
	printf("Fraction:%d / %d\n",c,d);
	
	int result=simplify(c,d);
	
	if(result==0){
		printf("The simplest version of the series is itself.");
	}
	
	

	return 0;
}
