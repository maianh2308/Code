#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void MinValue(int a[], int n){
	int min= a[0];
	int b=0;
	for(int i=0;i<n;i++){
		if(a[i]<min){
		min= a[i];
		b=i;}}
	printf("\nVay gia tri nho nhat la %d o vi tri thu %d", min, b);
}
void MaxValue(int a[], int n){
	int max= a[0];
	int b=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
		max= a[i];
		b=i;}}
	printf("\nVay gia tri lon nhat la %d o vi tri thu %d", max, b);
}
void GiaTriGanNhat(float m, int a[], int n){
	int *c;
	int d=0;
	int Gn;
	c=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
	c[i]=abs(m-a[i]);}
	Gn=c[0];
	for(int i=0;i<n;i++){
		if(c[i]<Gn){
		Gn= c[i];
		d=i;}}
	printf("\nVay gia tri gan nhat la %d", a[d]);
}
int main(){
	int n, i;
	int *a;
	printf("Nhap vao so phan tu n cua day:");
	scanf("%d", &n);
	a =(int*)malloc(n*sizeof(int));
	printf("\nNhap vao cac phan tu day :");
	for(i=0;i<n;i++){
		printf("\na[%d]= ", i);
		scanf("%d", &a[i]);
	}
	MinValue(a, n);
	MaxValue(a, n);
	//Tinh gia tri trung binh
	int B=0;
	int m;
	for(i=0;i<n;i++){
		B=B+a[i];}
	m= (float) B/n;
	GiaTriGanNhat(m, a, n);
}
