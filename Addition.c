#include<stdio.h>

int main() {
	int A[10][10], B[10][10], c[10][10];
	int i,j rows, cols;
	printf("Enter rows and columns:");
	scanf("%d %d",&row,&cols);
	
	printf("Enter elements of matrix A:\n");
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++){
			scanf("%d", &A[1][j]);
		}
	} 
		printf("Enter elements of matrix B:\n");
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++) {
			scanf("%d", &B[1][j]);
		}
	}
	printf("\nAddition of matrices:\n");
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++){
			C[i][j] = A[i][j] +  B[i][j];
			printf("%d", C[i][j]);
		}
		printf("\nSubtraction of matrices:\n");
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++){
			C[i][j] = A[i][j] +  B[i][j];
			printf("%d", C[i][j]);
		
