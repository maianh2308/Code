#include <stdio.h>
float TongS1(float n){
	float i, S1=0;
	for(i=1;i<=n;i++){
	S1=S1+(float)1/(i*(i+1));
	}
	return S1;}
float TongDay(float n){
	if(n==1)
	return 1;
	else return n+TongDay(n-1);}
float TongS2(float n){
	float i, S2=0;
	for(i=1;i<=n;i++){
	
		S2=S2+1/TongDay(i);}
	return S2;
	}
int main(){
	float n;
	printf("Nhap vao so nguyen n:");
	scanf("%f", &n);
	
	printf("\nVay tong S1 la: %.2f", TongS1(n));
	
	printf("\nVay tong S2 la: %.2f", TongS2(n));
	
}
