#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	float x, x1, x2, delta;
	printf("Nhap vao he so a, b, c cua phuong trinh:");
	scanf("%f%f%f", &a, &b, &c);
	if(a==0){
	x=-c/b;
	printf("\nPhuong trinh co nghiem duy nhat x= %.2f", x);}
	else {
	delta= b*b-(4*a*c);
	if(delta<0){printf("\nPhuong trinh vo nghiem!");}
	else {
	if(delta>0){
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	printf("\nPhuong trinh co 2 nghiem x1=%.2f va x2=%.2f", x1, x2);}
	else {
	x=-b/(2*a);
	printf("\nPhuong trinh co nghiem duy nhat x=%.2f", x);}}}
}
