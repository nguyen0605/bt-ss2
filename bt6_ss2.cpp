#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float PI=3.14, r, chuvi, dientich;
	printf("Nhap vao ban kinh r: ");
	scanf("%f", &r);
	printf("Chu vi hinh tron co ban kinh %.2f la %.2f\n",r,chuvi=2*PI*r);
	printf("Dien tich hinh tron co ban kinh %.2f la %.2f\n",r,dientich=PI*r*r);
	return 0;
}
