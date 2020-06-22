#include <stdio.h>

void counters(void){
	int x = 4;
	int y = 6;
	if (x < y){
		printf("x is less than y\n");
	}
}

int main(void)
{
	printf("hello world\n");
	counters();
}