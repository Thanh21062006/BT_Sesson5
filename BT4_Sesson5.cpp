#include <stdio.h>

int main() {
	int i, numb;
	printf("Moi ban nhap nhap vao bang cuu chuong can tim tu 1 - 10: ");
	scanf("%d", &numb);
	
	if(numb > 0 && numb <= 10){
		for(i = 1;i <= 10;i++){
			printf("%d * %d = %d\n",numb,i,numb*i);
		}
	}
	else{
		printf("Ban chua nhap dung yeu cau roi!");
	}
	return 0;
}
