#include<stdio.h>

int main(void){
	int year;
	
	scanf("%d",&year);
	
	if(year>0&&year<4001){
		if(year%4==0){
			if(year%100==0){
				if(year%400==0){
					printf("1\n");
				}
				else{
					printf("0\n");
				}
			}
			else{
				printf("1\n");
			}
		}
	}
	else{
		printf("이거 맞아? 다시 해봐\n");
	}
	
	return 0;
}