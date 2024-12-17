#include <stdio.h>

int main(){
	int a;	printf("Nhap vao so nguyen a = 5 neu sai ban se phai nhap lai !! : ");	
	scanf("%d",&a);
	
	while(a != 5){
		printf("Sai roi hay nhap lai a = 5 : ");	
		scanf("%d", &a);
	}
	printf("Ban da nhap dung roi day!");
return 0;
}
