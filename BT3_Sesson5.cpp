#include <stdio.h>

int main() {
	int i, number, total = 0;
	printf("Moi ban nhap vao mot so bat ki: ");
	scanf("%d", &number);
	
	for(i = 1;i <= number;i++){
		total += i;
	}
	printf("Tong tu 1 den %d la: %d",number,total);
	
	return 0;
}
