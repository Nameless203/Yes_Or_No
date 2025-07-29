#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void randomstuff ()
{
	char str[4];
	int random,cond1,cond2;
	srand(time(NULL));
	do {
		random = rand() % (3+1);
		cond1 = rand() % (3+1);
		cond2 = rand() % (3+1);

		if (random == cond1){
			strcpy(str,"yes");
			break;}
		else if (random == cond2){
			strcpy(str,"no");
			break;}
		else {};
	}while(1);
	printf("%s",str);
}


int main()
{
	char question[50];
	printf("Welcome to my silly project YesorNo\n Note this only accept 50 character include space\n Also note this is silly software i create for fun so don't use this to decide serious matter \n Also another note this program only product yes or no answer so ask yes or no based question");
	printf("\n Now ask away your question\n");
	fgets(question, sizeof(question),stdin);
	randomstuff();
	return 0;
}



