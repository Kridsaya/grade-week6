#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void grade(int score)
{
	if (score < 0 || score>100)
	{
		printf("Please insert the number that is greater oe equal zero.");
	}
	else if (score <= 100 && score >= 80)
	{
		printf("A");
	}
	else if (score < 80 && score >= 70)
	{
		printf("B");
	}
	else if (score < 70 && score >= 60)
	{
		printf("C");
	}
	else if (score < 60 && score >= 50)
	{
		printf("D");
	}
	else {
		printf("F");
	}
}

int main()
{
	int score;
	printf("Enter your score : ");
	scanf_s("%d", &score);
	grade(score);
	return 0;
}