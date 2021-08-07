#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#define MAX 100

typedef struct {
    int soBaoDanh;
    char hoTen[25];
    float diemToan;
    float diemLy;
    float diemTiengAnh;
    float tongDiem;
} SinhVien;

typedef struct node{
    SinhVien data;
    struct node* next;
} Node;

Node* first = NULL;

Node* capPhatNode ()
{
    Node* pNode = (Node*)malloc(sizeof(Node));
    //ki?m tra NULL?
    return pNode;
}

SinhVien nhapSinhVien()
{
    SinhVien sv;

    printf("\tSo bao danh: ");
    scanf("%d",&sv.soBaoDanh);

    printf("\tHo ten: ");
    fflush(stdin);
    gets(sv.hoTen);

    printf("\tDiem toan: ");
    scanf("%f",&sv.diemToan);

    printf("\tDiem ly: ");
    scanf("%f",&sv.diemLy);

    printf("\tDiem tieng anh: ");
    scanf("%f",&sv.diemTiengAnh);

    sv.tongDiem = sv.diemToan + sv.diemLy + sv.diemTiengAnh;

    return sv;
}

Node* taoNode()
{
    Node* pNode = capPhatNode();
    pNode->data = nhapSinhVien();
    pNode->next = NULL;
    return pNode;
}

Node* timNodeCuoi ()
{
    if (first==NULL)
        return NULL;

    Node* i = first;
    while (i->next != NULL)
    {
        i = i->next;
    }
    return i;
}

void themNodeVaoCuoi()
{
    //TH danh sách r?ng
    if (first == NULL)
    {
        Node* pNode = taoNode();
        first = pNode;
    }
    //TH danh sách không r?ng
    else
    {
        //Thêm 1 node vào cu?i
        Node* last = timNodeCuoi();

        Node* pNode = taoNode();

        last->next = pNode;
    }

}

void taoDanhSach()
{
    //Xoá danh sách cu n?u có
    first = NULL;

    //Nh?p danh sách m?i
    int n;
    printf("\tNhap so luong phan tu: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++)
    {
        printf("\tNhap sinh vien thu %d\n",i+1);
        themNodeVaoCuoi();
    }
}

void hienThiSinhVienTheoDong (SinhVien sv)
{
    printf("%5d%25s%10.2f%8.2f%8.2f%6.2f\n",sv.soBaoDanh, sv.hoTen, sv.diemToan, sv.diemLy,sv.diemTiengAnh,sv.tongDiem);
}

void hienThiDanhSach()
{
    printf("\t\tDANH SACH DIEM THI THPT\n");
    printf("\t%5s%5s%25s%10s%8s%8s%6s\n","STT", "SBD", "Ho ten", "Diem Toan", "Diem Ly", "Diem TA", "Tong");
    int stt = 1;
    for (Node* i = first; i!=NULL; i = i->next)
    {
        printf("\t%5d",stt);
        hienThiSinhVienTheoDong(i->data);
        stt++;
    }
}

void sapXepDanhSachTheoDiemTA()
{
    if (first!=NULL)
    {
        for (Node* i=first; i!=NULL; i=i->next)
        {
            for (Node* j=i->next; j!=NULL; j=j->next)
            {
                if (j->data.diemTiengAnh > i->data.diemTiengAnh)
                {
                    SinhVien tmp = i->data;
                    i->data = j->data;
                    j->data = tmp;
                }
            }
        }
    }
}

void sapXepDanhSachTheoDiemLy()
{
    if (first!=NULL)
    {
        for (Node* i=first; i!=NULL; i=i->next)
        {
            for (Node* j=i->next; j!=NULL; j=j->next)
            {
                if (j->data.diemLy > i->data.diemLy)
                {
                    SinhVien tmp = i->data;
                    i->data = j->data;
                    j->data = tmp;
                }
            }
        }
    }
}

void sapXepDanhSachTheoDiemToan()
{
    if (first!=NULL)
    {
        for (Node* i=first; i!=NULL; i=i->next)
        {
            for (Node* j=i->next; j!=NULL; j=j->next)
            {
                if (j->data.diemToan > i->data.diemToan)
                {
                    SinhVien tmp = i->data;
                    i->data = j->data;
                    j->data = tmp;
                }
            }
        }
    }
}

void sapXepDanhSachTheoTongDiem()
{
    if (first!=NULL)
    {
        for (Node* i=first; i!=NULL; i=i->next)
        {
            for (Node* j=i->next; j!=NULL; j=j->next)
            {
                if (j->data.tongDiem > i->data.tongDiem)
                {
                    SinhVien tmp = i->data;
                    i->data = j->data;
                    j->data = tmp;
                }
            }
        }
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach\n");
    printf("\t2. Hien thi danh sach\n");
    printf("\t3. Sap xep diem thi\n");
    printf("\t4. Ket thuc\n");
    printf("\t\tVui long chon: ");
}

void subMenu()
{
    printf("\t1. Sap xep theo diem toan\n");
    printf("\t2. Sap xep theo diem ly\n");
    printf("\t3. Sap xep theo diem tieng anh\n");
    printf("\t4. Sap xep theo tong diem\n");
    printf("\t\tVui long chon: ");
}

int main (int argc, char const *argv[])
{
    while(1)
    {
        system("cls");
        menu();
        int chon;
        scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
            case 1:
            {
                printf("\tBan da chon tao danh sach\n");
                taoDanhSach();
                printf("\tTao xong danh sach\n");
                break;
            }
            case 2:
            {
                hienThiDanhSach();
                break;
            }
            case 3:
            {
                subMenu();
                int chon;
                scanf("%d",&chon);
                switch (chon)
                {
                    case 1:
                    {
                        sapXepDanhSachTheoDiemToan();
                        hienThiDanhSach();
                        break;
                    }
                    case 2:
                    {
                        sapXepDanhSachTheoDiemLy();
                        hienThiDanhSach();
                        break;
                    }
                    case 3:
                    {
                        sapXepDanhSachTheoDiemTA();
                        hienThiDanhSach();
                        break;
                    }
                    case 4:
                    {
                        sapXepDanhSachTheoTongDiem();
                        hienThiDanhSach();
                        break;
                    }
                    default:
                    {
                        printf("\tChi chon 1-4\n");
                    }
                }
                break;
            }
            case 4:
            {
                printf("\tBYE\n");
                return 0;
            }
            default:
            {
                printf("\tChi nhap tu 1-4\n");
            }
        }
        printf("\tBam 1 nut bat ky de ve menu\n");
        getch();
    }
}
