#include <stdio.h>
#include <math.h>
void SoChinhPhuong(int m){
	int a;
	a= sqrt(m);
	if(a*a==m){
	printf("\nVay %d la so chinh phuong!",m);}
	else{
		printf("\nVay %d khong la so chinh phuong!",m);
	}}
void SoNguyenTo(int m){
	int i;
	int a=0;
	for(i=2;i<=sqrt(m);i++){
		if(m%i==0){
		a=a+1;}
		}
		if(a==0){
		printf("\nVay %d la so nguyen to!", m);}
		else {printf("\n Vay %d la khong so nguyen to!", m);}
		}
void SoDoiXung(int m){
	printf("\nVay %d ", m);
	int a[100];
	int i, j;
	int n=m;
	for(i=0;m>0;i++){
		a[i]=m%10;
		m=m/10;}
		int B=0;
	for(j=i;j>=0;j--){
		
		B=B+a[j]*pow(10, j);}
	if(B!=n){printf("khong la so doi xung!");}
	else {printf(" la so doi xung!");}}
int main(){

	int m ;
	printf("Nhap vao so nguyen M(m<2ty):");
	scanf("%d", &m );
	
	SoChinhPhuong(m);
	SoNguyenTo(m);
	SoDoiXung(m);
}
