#include<stdio.h>
int main(){
	int a,b;
	int i,j;
	scanf("%d %d",&a,&b);
	int T[a][b];
	for(i =0;i<a;i++){
		for( j=0;j<b;j++){
			scanf("%d",&T[i][j]);
		}
	}
	for( i =0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",(T[i][j])+1);
		}
		printf("\n");
	}

}
