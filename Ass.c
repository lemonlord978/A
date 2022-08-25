/*     _
   .__(.)< (MEOW)
   \___)   
   
*/
/*
#####################################################################
#	Nhan qua khong no chung ta thu gi, cho nen xin dung oan gian	#
#                               _oo0oo_							    #
#                              088888880							#
#                              88" . "88							#
#                             (\  - -  |)							#
#                              0\  =  /0							#
#                            ___/'---'\___							#
#                          .' \\|     |// '. 						#
#                         / \\|||  :  |||// \\						#
#                        /_ ||||| -:- |||||- \\				     	#
#                       |   | \\\  -  /// |   |				    	#
#                       | \_|  ''\---/''  |_/ |				    	#
#                       \  .-\__  '-'  __/-.  /					    #
#                     ___'. .'  /--.--\  '. .'___					#
#                  ."" '<  '.___\_<|>_/___.' >'  "". 				#
#                 | | : '-  \'.;'\ _ /';.'/ - ' : | |				#
#                 \  \ '_.   \_ __\ /__ _/   .-' /  /				#
#          =========='-.____'.___ \_____/___.-'____.-'==========	#
#       	                    '=---='								#
#																	#
#            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^       #
Duc Phat noi day phu ho code con chay khong Bug. Nam mo a di da Phat. 
*/
    

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct 
{
	int value;
} Ele;

Ele AddEle(Ele a[], int n){
	Ele ele1;
	int i;
	i=n++;
	printf("Enter input number %d: ", n);
	scanf("%d", &ele1.value);
	return ele1;
}

//---InDanhSach---
void output(Ele a[], int n){
	int i;
	for (i=0; i<n; i++)
	{
		printf("Value of position %d is: %d\n", i+1, a[i].value);
	}
}

//---SearchElement---
void search(Ele* a, int n) {
	int value;
	printf("Enter value of element: ");
	scanf("%d", &value);
	int i, search = 0;
	for(i = 0; i < n; i++) {
		if(value - a[i].value == 0) {
			printf("Value of position %d is: %d\n", i+1, a[i].value);
			search = 1;
		}
	}
	if(search == 0) {
		printf("Invalid value!\n");
	}
}

int main(){
	//---KhaiBao---
	int num;
	int n,i;
	Ele a[100];
	int status,temp;
	Ele ele1;

	//---Menu---
	do {
	printf("********ProVip9000ProgramDesignedByNghiaHoangPhu*********\n");
	printf("*\t\t1: Add new element.\t\t\t*\n");
	printf("*\t\t2: Display array.\t\t\t*\n");
	printf("*\t\t3: Searching element in array.\t\t*\n");
	printf("*\t\t4: Delete value in array.\t\t*\n");
	printf("*\t\t5: Delete element at index.\t\t*\n");
	printf("*\t\t6: Delete some elements in range.\t*\n");
	printf("*\t\t7: Sort element in array.\t\t*\n");
	printf("*\t\t8: Insert an element to array.\t\t*\n");
	printf("*\t\t9: Quit.\t\t\t\t*\n");
	printf("*********************************************************\n");
	printf("Option: ");
	status=scanf("%d",&num); 
	while(status!=1) {
	while((temp=getchar())!=EOF&&temp!='\n');
	printf("Please re-enter your option: ");
	status = scanf("%d", &num);
	}
	switch (num)
	{
		case 1:
        ele1 = AddEle(a, n);
        a[n++] = ele1;
		break;
		case 2:
		output(a, n);
		break;
		case 3:
		search(a, n);
		break;
		case 4:
		break;
		case 5:
		break;
		case 6:
		break;
		case 7:
		break;
		case 8:
		break;
		case 9:
		printf("Quiting...\n");
		break;
	}
	
} while(num!=9);

	return 0;
}
