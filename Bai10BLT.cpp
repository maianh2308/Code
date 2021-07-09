#include <stdio.h>
#include <math.h>
void KiemTraAmstrong(int i){
	int j;
	int a[100];
	for(j=0;i>0;j++){
		a[j]=i%10;
		i=i/10;}
}
int main(){
	int m;
	do{
	printf("Nhap vao so nguyen duong m(m<2ti):");
	scanf("%d", &m);
	}while(m>2*pow(10, 9));
	int i;
	for(i=1;i<=m;i++){
	KiemTraAmstrong(i);}	
}
