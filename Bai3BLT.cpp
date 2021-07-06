#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i;
	int a[100];
	printf("Nhap vao n:");
	scanf("%d", &n);
	for(i=0;n>0;i++){
	a[i]=n%2;
	n=n/2;}
	
	printf("\nVay chuyen sang he nhi phan la :");
	for(i=i-1;i>=0;i--){
	printf("%d", a[i]);

}}
