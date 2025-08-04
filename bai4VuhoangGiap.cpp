#include <stdio.h>

int main(){
	float a;
	printf("hay nhap so kWh tieu thu:\n");
	scanf("%f",&a);
	float b = 1.678*a;
	float c = 1.734*a;
	float d = 2.014*a;
	float e = 2.536*a;
	if(a <= 50){
		printf("Ban phai tra so tien: %f",b);
	}else if(a > 50 && a<=100){
		printf("Ban phai tra so tien: %f",c );
	}else if(a > 100 && a<200){
		printf("Ban phai tra so tien: %f",d );
	}else if(a = 200){
		printf("Ban phai tra so tien: %f",e );
	};
	return 0;
}
