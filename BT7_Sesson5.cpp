#include <stdio.h>

int main() {
	int i, a, b, numb;
	printf("Moi ban nhap vao so a: ");
	scanf("%d", &a);
	printf("Moi ban nhap vao so b: ");
	scanf("%d", &b);
	
	for(i = 1;i <= a;i++){
		if(a % i == 0){
			if(b % i == 0){
				numb = i;
			}
		}
	}
	printf("%d", numb);
	
	return 0;	
}
