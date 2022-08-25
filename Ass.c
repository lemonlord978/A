/*     _
   .__(.)< (MEOW)
   \___)   
   
*/
/*
#####################################################################
#	Nhân qu? không n? chúng ta th? gì, cho nên xin d?ng oán gi?n	#
#                                _oo0oo_							#
#                               088888880							#
#                               88" . "88							#
#                               (| ?? |)							#
#                                0\ = /0							#
#                             ___/'---'\___							#
#                           .' \\|     |// '. 						#
#                          / \\|||  :  |||// \\						#
#                         /_ ||||| -:- |||||- \\					#
#                        |   | \\\  -  /// |   |					#
#                        | \_|  ''\---/''  |_/ |					#
#                        \  .-\__  '-'  __/-.  /					#
#                      ___'. .'  /--.--\  '. .'___					#
#                   ."" '<  '.___\_<|>_/___.' >'  "". 				#
#                  | | : '-  \'.;'\ _ /';.'/ - ' : | |				#
#                  \  \ '_.   \_ __\ /__ _/   .-' /  /				#
#           =========='-.____'.___ \_____/___.-'____.-'==========	#
#       	                    '=---='								#
#																	#
#            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Ð?c Ph?t noi dây phù h? code con ch?y không Bug. Nam mô a di dà Ph?t
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
	printf("*ProVip*\n");
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
