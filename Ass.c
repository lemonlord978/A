#include<stdio.h>
#include<string.h>
int main(){
	//---KhaiBao---
	int n;
	int a[100];
	int status,temp;
	
	//---Menu---
	do {
	printf("*********************************************************\n");
	printf("*\t\t1: Add new element.\t\t\t*\n");
	printf("*\t\t2: display array.\t\t\t*\n");
	printf("*\t\t3: searching element in array.\t\t*\n");
	printf("*\t\t4: Delete value in array.\t\t*\n");
	printf("*\t\t5: Delete element at index.\t\t*\n");
	printf("*\t\t6: Delete some elements in range.\t*\n");
	printf("*\t\t7: Sort element in array.\t\t*\n");
	printf("*\t\t8: Insert an element to array.\t\t*\n");
	printf("*\t\t9: Quit.\t\t\t\t*\n");
	printf("*********************************************************\n");
	printf("Option: ");
	status=scanf("%d",&n); 
	while(status!=1) {
	while((temp=getchar())!=EOF&&temp!='\n');
	printf("Please re-enter your option: ");
	status = scanf("%d", &n);
	}
	switch (n)
	{
		case 1:;
		case 2:;
		case 3:;
		case 4:;
		case 5:;
		case 6:;
		case 7:;
		case 8:;
		case 9:
		printf("Quiting...");
		break;
	}
	
} while(n!=9);

	return 0;
}
