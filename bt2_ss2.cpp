#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,c,sum;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap c: ");
	scanf("%d", &c);
	sum=a+c;
	printf("Tong cua a va c la: %d\n",sum);
	return 0;
}
