#include <stdio.h>
#include <string.h>
void DemTu(char x[]){
	int i;
	int B=0;
	for(i=0;i<strlen(x);i++){
	if(i==0){
		if(x[i]>=48 && x[i]<=57){
			B=B+1;}}
		else if(x[i]>=48 && x[i]<=57 && x[i-1]==32){
		B=B+1;}}
	printf("\nSo luong tu bat dau bang chu so la %d", B);
}
int main(){
	char xau[100];
	printf("Nhap vao mot xau ki tu:");
	fgets(xau, sizeof(xau), stdin);
	DemTu(xau);
}
