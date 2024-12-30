#include<stdio.h>
#define max 100
void taomatran(int rows,int cols,int matrix[max][max]){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("nhap gia tri cua phan tu matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
}
void inmatran(int rows,int cols,int matrix[max][max]){
	printf("ma tran la: \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int rows,cols;
	printf("nhap so hang: ");
	scanf("%d",&rows);
	printf("nhap so cot ");
	scanf("%d",&cols);
	if(rows>max||cols>max){
		printf("so hang va so cot khong duoc vuot qua %d.\n",max);
		return 1;
	}
	int matrix[max][max];
	taomatran(rows,cols,matrix);
	inmatran(rows,cols,matrix);
	return 0;
}
