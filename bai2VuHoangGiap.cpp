#include <stdio.h>

int main(){
	int a , b;
	printf("cho phuong trinh bac nhat ax + b = 0\n");
	printf("hay nhap gia tri cua a va b de tinh gia tri cua x:");
	printf("nhap a:\n");
	scanf("%d",&a);
	printf("nhap b:\n");
	scanf("%d",&b);
	float c = 2*b ;
	float d = b - c;
	float x = d / a;
	printf("gia tri cua x la: %f",x);
	return 0;
	
}
