#include <stdio.h>

int main() {
	int variableA = 18, number;
	do{
		printf("Moi ban nhap vao mot so de kt: ");
		scanf("%d", &number);
		
		if(number != variableA){
			printf("So ban vua nhap chua dung voi dap an, xin hay thu lai!\n");
		}
	}while(number != variableA);
	printf("so ban vua nhap trung voi dap an la %d roi, chuong trinh ket thuc.",variableA);
	
	return 0;
}
