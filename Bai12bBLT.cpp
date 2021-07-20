#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void SapXep(int a[], int n){
	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }for(int i=0;i<n;i++){
	printf("%d ", a[i]);}}
void TinhTong(int a[], int n){
	int tong=0;
	int i;
	for( i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				a[j]=0;}
		}
	tong=tong+a[i];}
	printf("\nVay tong cac so khac nhau la: %d", tong);
}
//void SoNguyenTo(int a[], int n){
//	int i, c;
//	for( i=0;i<n;i++){
	//	for(int j=i+1;j<n;j++){
	//		if(a[i]==a[j]){
	//			a[j]=0;} }}
//	for( c=0;c<n;c++){
	//	int b=0;
	//	for(int j=1;j<a[c];j++){
	//		if(a[c]%j==0){b=b+1;}}
	//	if(b==0){printf("%d ", a[c]);}}}
int main(){
	int n; 
	int *a;
	printf("Nhap vao so nguyen n:");
	scanf("%d", &n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nNhap vao day %d so nguyen:", n);
	for(int i=0;i<n;i++){
		printf("\na[%d]=", i);
		scanf("%d", &a[i]);}
		printf("\n");
	for(int i=0;i<n;i++){
	printf("%d ", a[i]);}
	printf("\nVay mang sap xep theo chieu khong giam la:");
	SapXep(a, n);
	TinhTong(a, n);
	//printf("\nVay cac so nguyen to khac nhau trong day la: ");
	//SoNguyenTo(a, n);
}
