/*multi
 *line
 *comments
 * */
// single line comment
#include <stdio.h>
#include <string.h>

#define NAME "ayoub"

int globalVar = 100;

int main(){

	char firstLetter = 'A';
	int ThisIsaInteger = 34;

	long int thisIsLongerInteger = 152398;

	float PiValue = 3.16364;
	double NifAyoub = 774.4349;

	printf("\n");

	printf("AYoub nifo Kbiiir\n");
	printf("I am %d years old\n",ThisIsaInteger);
	printf("this is the value of PI = %.3f\n\n", PiValue);

	printf("this is a reallt big number %.4f\n", NifAyoub);

	char myName[] = "Ga3 Jrad Wlad Lqa7ab";
	printf("This is my name %s\n", myName);
	
	char YesOrNo;
	printf("wach ga3 jrad wlad lqbah (Y of yes, N for NO:> ");
	scanf("%c", &YesOrNo);
	printf("you said GJW9 %c\n", YesOrNo);
}
