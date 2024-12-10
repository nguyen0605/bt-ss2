#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,c,sum,difference,product;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap c: ");
	scanf("%d", &c);
	printf("Tong cua %d va %d la: %d\n", a,c, sum=(a+c));
	printf("Hieu cua %d va %d la: %d\n", a,c, difference=(a-c));
	printf("Tich cua %d va %d la: %d\n", a,c, product=(a*c));
	if(c==0)
	{
		printf("Khong the tinh thuong vi so thu hai bang 0\n");
	}
	else
	{
		float quotient;
		printf("Thuong cua %d va %d la: %.2f\n", a,c, quotient=(a*1.0/c));
	}
	return 0;
}
