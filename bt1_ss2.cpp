#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=-5; 
	//kieu du lieu so nguyen
	unsigned int b=5;
	//kieu du lieu so nguyen khong am
	short c=3;
	//kieu du lieu so nguyen co kich thuoc nho hon int
	long e=1234567890;
	//kieu du lieu so nguyen co kich thuoc lon hon int
	float f=3.14f;
	//kieu du lieu so thuc-Luu cac so co phan thap phan
	double d=2.71828143242; 
	//kieu du lieu so thuc-Luu cac so co do chinh xac cao hon float
	char g= 'A'; 
	//kieu du lieu ky tu-Luu mot ky tu
	printf("Gia tri cua cac bien:\n");
	printf("int a=%d\n", a);
    printf("unsigned int b=%u\n", b);
    printf("short c=%d\n", c);
    printf("long e=%lf\n", e);
    printf("float f=%f\n", f);
    printf("double d=%.11lf\n", d);
    printf("char g=%c\n", g);
	return 0;
}
