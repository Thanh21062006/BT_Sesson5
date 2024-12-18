#include <stdio.h>

int main() {
	int a, b, numb;
	printf("Moi ban nhap vao so a: ");
	scanf("%d", &a);
	printf("Moi ban nhap vao so b: ");
	scanf("%d", &b);
	
	while(true){
		printf("CALCULATOR\n\n");
		printf("1. Tong hai so\n");
		printf("2. Hieu hai so\n");
		printf("3. Tich hai so\n");
		printf("4. Thuong hai so\n");
		printf("5. Thoat\n\n");
		printf("Lua chon cua ban la: ");
		scanf("%d", &numb);
		 if(numb == 5){
		 	printf("Thoat!");
		 	break;
		 }
		
		switch(numb){
			case 1:
				printf("%d + %d = %d\n\n", a, b, a+b);
				break;
			case 2:
				printf("%d - %d = %d\n\n", a, b, a-b);
				break;
			case 3:
				printf("%d * %d = %d\n\n", a, b, a*b);
				break;
			case 4:
				printf("%d / %d = %d\n\n", a, b, a/b);
				break;
			default:
				printf("so ban nhap khong hop le!");
		}
	}
	return 0;
}
