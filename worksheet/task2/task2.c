/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Mohammad Tahmid Asraf	
 * ID: 201982497

 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	long power = 1;

	int length , i;

	printf("Enter a hexadecimal:");

	scanf ("%8s",hex);
	length = strlen(hex);

	for (i =length -1 ; i>= 0 ; i--)
	{
		char C = hex[i];
		int value ;
	


	 if (C >= '0' && C<= '9')
		{
		value = C- '0';
		}

		else if ((C>='A'&& C<='F') || (C>='a'&& C<='f'))
		{
			if (C>='A'&& C<='F')
			{
			
				value = C- 'A' +10;
			}
			else 
			{
				value = C- 'a' +10;
			}
			
			


		}

		else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}

	

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
		decimal =decimal + value *power;

		power = power *16;

	}
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}