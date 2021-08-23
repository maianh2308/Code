#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
/*
struct node{
    int data;
    struct node *pNext;
};
typedef struct node Node;
struct singleList{
    Node *pHead;
    Node *pTail;
};
typedef struct singleList List;
void khoiTao(List &l){
    l.pHead=l.pHead=NULL;
}
Node *taoNode(int x){
    Node *p=new Node;
    p->data=x;
    p->pNext=NULL;
    return p;
}
void themVaoDau(List &l,Node *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }else{
        p->pNext=l.pHead;
        l.pHead=p;
    }
}
void themVaoCuoi(List &l,Node *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }else{
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void inList(List l){
    for(Node *i=l.pHead;i!=NULL;i=i->pNext){
        printf("%5d", i->data);
    }
}
void themNode_p_vaosauNode_q(List &l, Node *p){
    int b;
    printf("\nNhap vao Node truoc Node can them:");
    scanf("%d",&b);
    Node *q=taoNode(b);
    if(q->data==l.pHead->data&&l.pHead->pNext==NULL){
    themVaoCuoi(l,p);
    }else{
    for(Node *i=l.pHead;i!=NULL;i=i->pNext){
        if(q->data==i->data){
            Node *h=taoNode(p->data);
            Node *g=i->pNext;
            h->pNext=g;
            i->pNext=h;
        }
    }}
}
void themNOde_p_vaotruocNode_q(List &l,Node *p){
    int b;
    printf("\nNhap vao Node sau Node can them:");
    scanf("%d",&b);
    Node *q=taoNode(b);
    Node *g=new Node;
    if(q->data==l.pHead->data&&l.pHead->pNext==NULL){
        themVaoDau(l,p);
    }else{
        for(Node *k=l.pHead;k!=NULL;k=k->pNext){
            if(q->data==k->data){
                Node *h=taoNode(p->data);
                h->pNext=k;
                g->pNext=h;
            }
            g=k;
        }
    }
}
void themNode_p_vaoViTriBatKi(List &l,Node *p,int vt, int n){
    Node *g=new Node;
    if(l.pHead==NULL||vt==1){
        themVaoDau(l,p);
    }
    else if(vt==n+1){
        themVaoCuoi(l,p);
    }else{
        int dem=0;
        for(Node *i=l.pHead;i!=NULL;i=i->pNext){
            dem++;
            if(dem==vt){
                Node *h=taoNode(p->data);
                h->pNext=i;
                g->pNext=h;
                break;
            }
            g=i;
        }
    }
}
void xoaDau(List &l){
    if(l.pHead==NULL){
        return;
    }else{
        Node *p=l.pHead;
        l.pHead=l.pHead->pNext;
        delete p;
    }
}
void xoaCuoi(List &l){
    if(l.pHead==NULL){
        return;
    }else{
       for(Node *k=l.pHead;k!=NULL;k=k->pNext){
            if(k->pNext==l.pTail){
                delete l.pTail;
                k->pNext=NULL;
                l.pTail=k;
            }
       }
    }
}
int main(){
    List l;
    khoiTao(l);
    while(1){
        system("cls");
        printf("\n===========MENU==========\n");
        printf("\n1. Tao Danh Sach");
        printf("\n2.Hien Thi Danh Sach");
        printf("\n3.Them 1 Phan Tu");
        printf("\n4.Them 1 phan tu vao phia truoc");
        printf("\n5.Them 1 phan tu vao vi tri bat ki");
        printf("\n6.Xoa Node dau");
        printf("\n7.Xoa Node cuoi");
        printf("\n8.Ket Thuc");
        printf("\n===========END==========\n");
        printf("\nNhap lua chon:");
        int chon;
        scanf("%d", &chon);
        system("cls");
        switch(chon){
            case 1:{
                printf("\nBan da chon tao danh sach");
                int n;
                printf("\nNhap vao so phan tu cua danh sach:");
                scanf("%d", &n);
                for(int i=0;i<n;i++){
                    int x;
                    printf("\nNhap vao phan tu thu %d:", i+1);
                    scanf("%d", &x);
                    Node *p=taoNode(x);
                    themVaoCuoi(l,p);
                }
                break;
            }
            case 2:{
                printf("\nBan da chon hien thi danh sach!\n");
                inList(l);
                break;
            }
            case 3:{
                printf("\nBan da chon them 1 phan tu\n");
                int a;
                printf("\nNhap vao node p:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                themNode_p_vaosauNode_q(l,p);
                break;
            }
            case 4:{
                int a;
                printf("\nNhap vao node p:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                themNOde_p_vaotruocNode_q(l,p);
                break;
            }
            case 5:{
                int n=0;
                for(Node *i=l.pHead;i!=NULL;i=i->pNext){
                    n++;}
                int vt;
                do{printf("\nNhap vao vi tri muon them:");
                scanf("%d", &vt);
                }while(vt<1||vt>n+1);
                int a;
                printf("\nNhap vao gia tri phan tu:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                themNode_p_vaoViTriBatKi(l,p,vt,n);
                break;
            }
            case 6:{
                xoaDau(l);
                break;
            }
            case 7:{
                xoaCuoi(l);
                break;
            }
            case 8:{
                printf("\nBYE!!!!");
                break;
            }
            default:{
                printf("\nChi nhap tu 1-8");
            }
        }
        printf("\nBam phim bat ki de ve MENU");
        getch();
    }
}*/
struct sinhVien{
    int id;
    char name;
    char gioiTinh;
    int tuoi;
    int diemLy;
    int diemToan;
    int diemHoa;
};
typedef struct sinhVien SV;
struct node{
    SV sv;
    struct node *pNext;
};
typedef struct node Node;
struct singleList{
    Node *pHead;
    Node *pTail;
};
typedef struct singleList List;
SV nhapSinhVien(){
    SV sv;
    printf("\nNhap vao id:");
    scanf("%d", &sv.id);
    fflush(stdin);
    printf("\nNhap vao ten:");
    scanf("%s", &sv.name);
    fflush(stdin);
    printf("\nNhap vao gioi tinh:");
    scanf("%s", &sv.gioiTinh);
    fflush(stdin);
    printf("\nNhap vao tuoi :");
    scanf("%d", &sv.tuoi);
    fflush(stdin);
    printf("\nNhap vao diem ly:");
    scanf("%d", &sv.diemLy);
    fflush(stdin);
    printf("\nNhap vao diem hoa:");
    scanf("%d", &sv.diemHoa);
    fflush(stdin);
    printf("\nNhap vao toan:");
    scanf("%d", &sv.diemToan);
    fflush(stdin);
    return sv;
}
Node *taoNode(){
    SV data=nhapSinhVien();
    Node *p=new Node;
       p->sv=data;
       p->pNext=NULL;
       return p;
}
List khoiTaoList(List &l){
    l.pHead=l.pTail=NULL;
}
void themVaoDau(List &l, Node *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }else{
        p->pNext=l.pHead;
        l.pHead=p;
    }
}
void themVaoCuoi(List &l, Node *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }else{
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void hienThi1Node(SV sv){
        printf("\n%5d%25s%10s%10d%10d%10d%10d", sv.id,sv.name,sv.tuoi,sv.diemToan,sv.diemLy,sv.diemHoa);
}
void hienThiList(List l){
        printf("\n==========Danh Sach Sinh Vien========\n ");
        printf("\n%5s%25s%10s%10s%10s%10s%10s", "ID","Ho va Ten","Tuoi","Diem Toan","Diem Ly", "Diem Hoa");
    for(Node *k=l.pHead;k!=NULL;k=k->pNext){
        hienThi1Node(k->sv);
        printf("\n");
    }
}
int main(){
    List l;
    khoiTaoList(l);
    while(true){
        system("cls");
        printf("\n========MENU=========");
        printf("\n1.Tao Danh Sach Sinh Vien");
        printf("\n2.Hien Thi Danh Sach");
        printf("\n3.Ket Thuc");
        printf("\nNhap lua chon:");
        int a;
        scanf("%d", &a);
        system("cls");
        switch(a){
            case 1:{
                printf("\nBan da chon tao danh sach!");
                int n;
                printf("\nNhap vao so luong sinh vien:");
                scanf("%d",&n);
                for(int i=0;i<n;i++){
                    printf("Nhap vao sinh vien thu %d", i+1);
                    Node *p=taoNode();
                    themVaoCuoi(l,p);
                }
                break;
            }
            case 2:{
                printf("\nBan da chon hien thi danh sach");
                hienThiList(l);
                break;
            }
            case 3:{
                printf("\nBYE");
            }
            default:{
                printf("\nChi nhap tu 1->3");
            }
        }
        printf("\nNhan phim bat ki ve MENU");
        getch();
    }
}

