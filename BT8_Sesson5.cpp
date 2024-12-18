#include <stdio.h>

int main() {
	int i, a, b;
	printf("Moi ban nhap vao so a: ");
	scanf("%d", &a);
	printf("Moi ban nhap vao so b: ");
	scanf("%d", &b);
	
	for(i = 1;i <= a*b;i++){
		if(i % a == 0 && i % b == 0){
			printf("Boi chung nho nhat cua hai so la %d ",i);
			break;
		}
	}
	return 0;
}
