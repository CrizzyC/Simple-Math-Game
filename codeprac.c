#include <stdio.h>
#include <string.h>
#include <unistd.h>
// Code Declaration
int x, y, z;
char a;
char friends[20] = "";
char friends1[20] = "";
char yes[] = "Yes";
char no[] = "No";
/* This shit easier than C++ lmao
anywho lets see if this code works */

int main () {
	printf("Type a Number: ");
	scanf("%d", &x);
	printf("Type Another Number: ");
	scanf("%d", &y);
	printf("Your numbers are %d", x);
	printf(" and %d\n\n", y);
	printf("Applying your numbers with numerical operations:\n\n");
	printf("If you multiply them you get %d\n", x * y);
	printf("If you add them you get %d\n", x + y);
	printf("If you subtract them you get %d\n", x - y);
	printf("If you divide them you get %d\n", x / y);

	printf("How about we give your friends a name?\n");
	printf("Give your friend a name (Pls use less than 20 characters): ");
	scanf("%s", &friends);
	printf("Want another friend? Type here: (Pls use less than 20 characters) ");
	scanf("%s", &friends1);
	printf("What's up %s", friends);
	printf(" and %s\n", friends1);
// Puzzle time cuz i need to fucking poop
	printf("Puzzle Time!\n");
	printf("Using the numbers and your friends you have inputed, lets put you into the test!\n\n");
	printf("If %s", friends);
	printf(" received %d", x);
	printf(" apples and got %d", y);
	printf(" more apples from %s", friends1);
	printf(" How many apples does %s", friends);
	printf(" have? : ");
	scanf("%d", &z);

	if (z == x + y) { 
		printf("You are correct! He gave %d", x + y);
		printf(" apples!\n\n");
		}
		else { 
		printf("Oof! Not correct! Returning 44 :p");
	return 0;
	}
	printf("Want another game? (Yes/No) (!!CASE SENSITIVE!!) ");
	scanf("%s", &yes, &no);
	if (strcmp(yes, "Yes")==0) {
		printf("Okay lets continue!\n");
		}
		else if (strcmp(no, "No")==0) {
		return 0;
		}
		else { 
		printf("Neither yes or no? Well this will be terminated anyway");
	return 0;
	}
	sleep(2);
	printf("If %s", friends);
	printf(" received %d", x);
	printf(" apples and was robbed %d", y);
	printf(" apples from %s", friends1);
	printf(" because health insurance is very expensive, ");
	printf(" How many apples does %s", friends);
	printf(" have now? : ");
	scanf("%d", &z);

		if (z == x - y && z < 0) { 
	printf("Correct! They now have %d", z);
		
	printf(" apples and the IRS is now on the hunt because they now owe %d", y - x);
	printf(" apples from the IRS!");
		}
	else if (z == x - y && z > 0) {
		printf("Correct! They now have %d", z);
		printf(" apples because of the US healthcare system!");
	
}
	else if (z == x - y && z == 0) {
		printf("Correct! They now have %d", z);
		printf(" apples and are offically broke enough to miss rent!");
		}
	else if (z != x - y) {
		printf("Nope! Try Again");
		}
	return 0;
}
