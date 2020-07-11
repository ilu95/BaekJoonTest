#include<stdio.h>

int main(void){
	int score;
	
	scanf("%d",&score);
	
	if(score>=0 && score<=100)
	{
		if(score>=90){
			printf("A\n");
		}
		else if(score>=80){
			printf("B\n");
		}
		else if(score>=70){
			printf("C\n");
		}
		else if(score>=60){
			printf("D\n");
		}
		else{
			printf("F\n");
		}
	}
	else{
		printf("이거 맞아? 다시 해봐\n");
	}
	
	return 0;
}