#include <stdio.h>
int main(){
	int m, y;
	do{
	printf("Nhap vao so nguyen m: ");
	scanf("%d", &m);
	printf("\nNhap vao so nguyen y:");
	scanf("%d", &y);
	}while(m<1||m>12);
	switch (m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:			
			{printf("\nThang %d nam %d co 31 ngay", m, y);
			break;}
		case 4:
		case 6:
		case 9:
		case 11:
			{ printf("\nThang %d nam %d co 30 ngay", m, y);
			break;}
		case 2:
			if(y%4==0||y%100!=0){
			printf("\nThang %d nam %d co 29 ngay", m, y);}
			else printf("\nThang %d nam %d co 28 ngay", m, y);
			break;}}
	
