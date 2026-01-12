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
	int min=T[0][0];
	for( i =0;i<a;i++){
		for(j=0;j<b;j++){
			if (T[i][j]<min){
				min = T[i][j];
			}
		}
	}
	printf("%d",min);
}
