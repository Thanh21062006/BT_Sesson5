#include <stdio.h>

int main(){
	int numb, a, b, c;
	while(true){
	printf("\n======MENU======\n");
	printf("1. Nhap 3 so\n");
	printf("2. Tong 3 so\n");
	printf("3. Trung binh cong 3 so\n");
	printf("4. So nho nhat\n");
	printf("5. So lon nhat\n");
	printf("6. Thoat\n\n");
	
	printf("Lua chon cua ban la: ");
	scanf("%d", &numb);
	
	if(numb == 6){
		printf("Thoat!");
		break;
	}
	switch(numb){
		case 1:
			printf("Moi ban nhap so thu nhat: ");
			scanf("%d", &a);
			printf("Moi ban nhap so thu hai: ");
			scanf("%d", &b);
			printf("Moi ban nhap so thu ba: ");
			scanf("%d", &c);
			break;
		case 2:
			printf("Tong 3 so la: %d\n", a + b + c);
			break;
		case 3:
			printf("Trung binh cong 3 so la: %.2f\n", (a + b + c)/3.0);
			break;
		case 4:
			if(a<b && a<c){
				printf("So nho nhat la %d\n",a);
			}
			else{
				if(b<a && b<c){
					printf("So nho nhat la %d\n",b);
				}
				else{
					printf("So nho nhat la %d\n",c);
				}
			}
			break;
		case 5:
			if(a>b && a>c){
				printf("So lon nhat la %d\n",a);
			}
			else{
				if(b>a && b>c){
					printf("So lon nhat la %d\n",b);
				}
				else{
					printf("So lon nhat la %d\n",c);
				}
			}
			break;
		default:
			printf("Ban nhap sai roi xin hay nhap lai!\n");
	}
	}
	return 0;
	
}
