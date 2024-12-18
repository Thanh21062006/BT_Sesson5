#include <stdio.h>

int main() {
	int i, numb = 0;
	
	while(numb < 9){
		numb++;
		for(i = 1;i <= 10;i++){
			printf("%d * %d = %d\n",numb,i,numb*i);
		}
		printf("\n\n");
	}
	return 0;
}
