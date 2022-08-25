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
  

#include<stdio.h>
#include<string.h>
int main(){
	//---KhaiBao---
	int n;
	int a[100];
	int status,temp;

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
	status=scanf("%d",&n); 
	while(status!=1) {
	while((temp=getchar())!=EOF&&temp!='\n');
	printf("Please re-enter your option: ");
	status = scanf("%d", &n);
	}
	switch (n)
	{
		case 1:
		break;
		case 2:
		break;
		case 3:
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
	
} while(n!=9);

	return 0;
}
