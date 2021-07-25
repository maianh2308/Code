#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  struct DauSach{
	char TenSach[100];
	char TenTacGia[100];
	char NhaXuatBan[100];
	int NamXuatBan;
	int SoLuong;
	int GiaBan;
};
int main(){
	int n;
	printf("Nhap vao so luong dau sach:");
	scanf("%d", &n);
	char ten[50]= "Nha Xuat Ban Springer" ;
	struct DauSach *p;
	p=(DauSach *)malloc(n*sizeof(DauSach));
	for(int i=1;i<=n;i++){
	printf("\nNhap vao dau sach thu %d:", i);
	printf("\nNhap vao ten sach:");
	getchar();
	scanf("%[^\n]", &(p+i)->TenSach);
	printf("\nNhap vao ten tac gia:");
	getchar();
	scanf("%[^\n]", &(p+i)->TenTacGia);
	printf("\nNhap vao ten nha xuat ban:");
	getchar();
	scanf("%[^\n]", &(p+i)->NhaXuatBan);
	printf("\nNhap vao nam xuat ban:");
	scanf("%d", &(p+i)->NamXuatBan);
	printf("\nNhap vao so luong:");
	scanf("%d", &(p+i)->SoLuong);
	printf("\nNhap vao gia ban:");
	scanf("%d", &(p+i)->GiaBan);
	}
		printf("\n STT |      Ten Sach       |      Ten Tac Gia           |     Nha Xuat Ban                    |   Nam    | Gia Ban     |  So Luong   |\n");
		getchar();
	for(int i=1;i<=n;i++){
	printf("\n%d            %s        %s        %s        %d      %d         %d", i,(p+i)->TenSach,(p+i)->TenTacGia,(p+i)->NhaXuatBan,(p+i)->NamXuatBan,(p+i)->GiaBan,(p+i)->SoLuong);
	getchar();}
	for(int i=1;i<=n;i++){
		if(strcmp((p+i)->NhaXuatBan,ten)==0){
		printf("%s\n%s\n%s\n%d\n%d\n%d",(p+i)->TenSach,(p+i)->TenTacGia,(p+i)->NhaXuatBan,(p+i)->NamXuatBan,(p+i)->GiaBan,(p+i)->SoLuong);}}
		printf("\n------------");
		printf("\nSach co gia nho hon 10000 la:\n");
	for(int i=1;i<=n;i++){
		if((p+i)->GiaBan<=10000){
		printf("%s\n%s\n%s\n%d\n%d\n%d\n",(p+i)->TenSach,(p+i)->TenTacGia,(p+i)->NhaXuatBan,(p+i)->NamXuatBan,(p+i)->GiaBan,(p+i)->SoLuong);}}
		int min, a;
		min=(p+1)->GiaBan;
	for(int i=1;i<=n;i++){
	if((p+i)->GiaBan<=min){
	min=(p+i)->GiaBan;
	a=i;}}
	printf("\nVay sach ban re nhat la :%s", (p+a)->TenSach);	
}
