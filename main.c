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
		printf("�л� ������ �Է��ϼ��� : ");
		scanf("%d", &grade[i]);
		sum+=grade[i];
	 
	}
	average=sum/5;
	printf("���� ��� : %d\n", average);
	return 0;
}
