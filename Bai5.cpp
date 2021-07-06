#include <stdio.h>
#include <math.h>
float TongS1(float n, float x){
	float S1=0, i;
	for(i=1;i<=n;i++){
	S1=S1+pow(x, 2*i);
	}
	return S1;}
float TongS2(float n, float x){
	float S2=0, i;
	for(i=0;i<=n;i++){
	S2=S2+pow(x, 2*i+1);
	}
	return S2;}
int main(){
	float n;
	float x;
	printf("Nhap vao so nguyen n:");
	scanf("%f", &n);
	printf("Nhap vao so thuc x:");
	scanf("%f", &x);
	
	printf("\nVay tong S1 la: %.2f", TongS1(n, x));
	
	printf("\nVay tong S2 la: %.2f", TongS2(n, x));
}
