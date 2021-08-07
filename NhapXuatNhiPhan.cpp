#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#define MAX 100

typedef struct{
    char maSV[10];
    char hoTen[25];
    int namSinh;
} SinhVien;

SinhVien nhapSinhVien ()
{
    SinhVien sv;
    printf("\tMa sinh vien: ");
    fflush(stdin);
    gets(sv.maSV);

    printf("\tHo ten: ");
    fflush(stdin);
    gets(sv.hoTen);

    printf("\tNam sinh: ");
    scanf("%d",&sv.namSinh);

    return sv;
}

//Nh?p danh sách lên t?p
void nhapDanhSachLenTep (char* filePath)
{
    //M? file
    FILE* f = fopen(filePath,"wb");

    //X? lí file
    int stt = 1;
    while (1)
    {
        printf("\tNhap sinh vien thu %d\n",stt);
        SinhVien sv = nhapSinhVien();
        fwrite(&sv,sizeof(SinhVien),1,f);

        stt++;
        printf("\tNhap tiep? (y/n): ");
        char chon;
        fflush(stdin);
        chon = getchar();
        if (chon=='n' || chon=='N')
            break;
    }

    //Ðóng file
    fclose(f);
}

/*void luuDanhSachLenTep (char* filePath, SinhVien dssv[], int n)
{
    //M? file
    FILE* f = fopen(filePath,"wb");

    //X? lí file
    for (int i=0; i<n; i++)
    {
        fwrite(&dssv[i],sizeof(SinhVien),1,f);
    }

    //Ðóng file
    fclose(f);
}*/

//Ð?c danh sách t? t?p, luu vào m?ng dssv và gi? v? s? lu?ng ph?n t?
int docDanhSachTrenTep (char* filePath, SinhVien dssv[])
{
    //M? file
    FILE* f = fopen(filePath, "rb");

    //X? lí file
    int i = 0;
    while( fread(&dssv[i], sizeof(SinhVien),1,f) > 0)
    {
        i++;
    }

    //Ðóng file
    fclose(f);

    return i;
}

void hienThiSinhVien(SinhVien sv)
{
    printf("%10s%25s%9d\n",sv.maSV,sv.hoTen,sv.namSinh);
}

void hienThiDanhSachSinhVien (SinhVien dssv[], int n)
{
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("\t%5s%10s%25s%9s\n","STT", "Ma SV", "Ho ten", "Nam sinh");
    int stt = 1;
    for (int i=0; i<n; i++)
    {
        printf("\t%5d",stt);
        hienThiSinhVien(dssv[i]);
        stt++;
    }
}

//Tìm sinh viên theo tên, gi? v? ch? s? trong m?ng
int timSinhVienTheoMaSV (SinhVien dssv[], int n, char maSVCanTim[])
{
    for (int i=0; i<n; i++)
    {
        if (strcmp(dssv[i].maSV,maSVCanTim)==0)
        {
            return i;
        }
    }
    return -1;
}

//S?a thông tin sinh viên th? i
void suaThongTinSinhVien (SinhVien dssv[], int i)
{
    dssv[i] = nhapSinhVien();
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach\n");
    printf("\t2. Hien danh sach\n");
    printf("\t3. Sua thong tin sinh vien\n");
    printf("\t4. Ket thuc\n");
    printf("\t\tVui long chon: ");
}

int main (int argc, char const *argv[])
{
    SinhVien dssv[100];
    int n = 0;
    while (1)
    {
        system("cls");
        menu();
        int chon;
        scanf("%d",&chon);
        switch(chon)
        {
            case 1:
            {
                printf("\tBan da chon tao danh sach\n");
                nhapDanhSachLenTep((char*)"DS_SV.C");
                break;
            }
            case 2:
            {
                n = docDanhSachTrenTep((char*)"DS_SV.C",dssv);
                hienThiDanhSachSinhVien(dssv,n);
                break;
            }
            case 3:
            {
                n = docDanhSachTrenTep((char*)"DS_SV.C",dssv);
                printf("\tNhap ma sinh vien can tim: ");
                char maSVCanTim[10];
                fflush(stdin);
                gets(maSVCanTim);
                if (timSinhVienTheoMaSV(dssv,n,maSVCanTim)<0)
                {
                    printf("\tKhong tim thay ma sinh vien %s\n",maSVCanTim);
                }
                else
                {
                    printf("\tNhap lai thong tin sinh vien nay\n");
                    suaThongTinSinhVien(dssv,timSinhVienTheoMaSV(dssv,n,maSVCanTim));
                    luuDanhSachLenTep((char*)"DS_SV.C",dssv,n);
                }
                break;
            }
            case 4:
            {
                printf("\tBYE");
                return 0;
            }
            default:
            {
                printf("\tChi chon 1-4\n");
            }
        }
        printf("\tBam nut bat ky de ve menu\n");
        getch();
    }
    return 0;
}
