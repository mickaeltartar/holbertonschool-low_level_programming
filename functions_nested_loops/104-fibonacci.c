#include <stdio.h>

/**
 * main - print first 98 numbers of fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int count = 2;
	unsigned long currentFibonacci = 1;
	unsigned long previousFibonacci = 1;
	unsigned long nextFibonacci = 0;
	unsigned long currentHead;
	unsigned long currentTail;
	unsigned long previousHead;
	unsigned long previousTail;
	int overflow;
	unsigned long nextTail;
	unsigned long nextHead;

	printf("1");

	while (count < 93)
	{
		nextFibonacci = currentFibonacci + previousFibonacci;
		previousFibonacci = currentFibonacci;
		currentFibonacci = nextFibonacci;
		printf(", %lu", nextFibonacci);
		count++;
	}
	currentHead = currentFibonacci / 1000000000;
	currentTail = currentFibonacci % 1000000000;
	previousHead = previousFibonacci / 1000000000;
	previousTail = previousFibonacci % 1000000000;

	while (count < 99)
	{
		overflow = (currentTail + previousTail) / 1000000000;
		nextTail = (currentTail + previousTail) - (1000000000 * overflow);
		nextHead = (currentHead + previousHead) + overflow;

		printf(", %lu%lu", nextHead, nextTail);

		currentHead = previousHead;
		currentTail = previousTail;
		previousHead = nextHead;
		previousTail = nextTail;

		count++;
	}
	printf("\n");

	return (0);
}
