#include <cstdio>
int main() 
{
     unsigned number1,number2;
     int sum = 0;
     scanf("%u %u",&number1,&number2);
     if(number1 % 2 == 0){
     	number1 += 1;
	 }
     	for( ;number1<=number2;number1+=2) {
     		sum += number1;
     	}
	printf("%d", sum);
    return 0;
}
