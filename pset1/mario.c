#include <stdio.h>
#include <cs50.h>
int main(void){
	int height,i,j,k;
	do{
		printf("height: ");
		//scanf("%d",&height);
		height = GetInt();
	}while(height > 23 || height <0);
	if(height == 1){
		printf("##\n");
	}
	else if(height > 1){
		for(i = 0; i < height; i++){
			for(j = i; height > (j + 1) ;j++){
					printf(" ");
			}
			for(k = i; k + 2 > 0; k--){
				printf("#");
			}
			printf("\n");
		}
	}
	return 0;
}	