#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i, average;
	int sum;
	int grade[5];
	
	sum=0;
	for (i=0; i<5; i++)
	{
		printf("학생 성적을 입력하세요 : ");
		scanf("%d", &grade[i]);
		sum+=grade[i];
	 
	}
	average=sum/5;
	printf("성적 평균 : %d\n", average);
	return 0;
}
