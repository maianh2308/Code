#include <stdio.h>
#include <math.h>
int B=0;
int SoChinhPhuong(int a, int b){
	int A;
	//int B=0;
	A= sqrt(a*b);
	if(A*A==(a*b)){
	B=B+1;}
	return B;}
int main(){
	int n=pow(10, 7);
	int a, b;
	for(int i=pow(10, 6); i<n;i++){
	a=i/(pow(10, 6));
	b=i%10;
	SoChinhPhuong(a, b);}
	printf("\n So luong cac so thoa man la: %d", B);
	
}
