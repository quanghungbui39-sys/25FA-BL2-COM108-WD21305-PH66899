// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include<stdlib.h>
void Bai1()
{
    system("cls");
    // khai bao 
    char tenThucung[30];
    char maThucung[30];
    int namSinh;
    int tuoi;
    // moi nhap
    printf("Moi nhap ten thu cung: ");
    scanf_s("%s", tenThucung, sizeof(tenThucung));
    printf("Moi nhap ma thu cung: ");
    scanf_s("%s", maThucung, sizeof(maThucung));
    printf("Moi ban nhap nam sinh: ");
    scanf_s("%d", &namSinh);
    // tinh toan
    tuoi = 2025 - namSinh;
    // in kq
    printf("Ten thu cung la %s\n", tenThucung);
    printf("Ma thu cung la %s\n", maThucung);
    printf("Nam sinh cua thu cung la %d\n", namSinh);
    printf("Tuoi cua thu cung la %d\n", tuoi);
}
void Bai2()
{
    system("cls");
    // khai bao 
    int n, i, tong = 0;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        tong += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
    if (n % 2 == 0)
    {
        printf("%d la so le.\n", n);
    }
    printf("Tong cac so le tu 1 den %d : %d\n", n, tong);
    if (n %= 5 )
    {
        printf("%d chia het cho 5\n", n);
    }
    else
    {
        printf("%d khong chia het cho 5\n", n);
    }
}
void Bai3()
{

}
int main()
{
    // khai bao
    int chon;
    // tao bang
    do
    {
        system("cls");
        printf("---Bang Menu---\n");
        printf("1.Thong tin thu cung\n");
        printf("2.Tinh tong\n");
        printf("3.Thong tin cua hang\n");
        printf("4.Thoat\n");
        printf("Moi ban chon cn tu [1-3]\n");
        printf("--------------------\n");
        // chon cn
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &chon);
        //thuc hien chuc nang
        while (1)
        {
            switch (chon)
            {
            case 1:
                Bai1();
                break;
            case 2:
                Bai2();
                break;
            case 3:
                Bai3();
                break;
            case 0:
            {
                printf("--Thoat--!!!");
                exit(0);
                break;
            }
            default:
            {
                printf("Ban nhap sai. Vui long nhap lai cn tu [1-3]");
                break;
            }
            system("pause");

            }
            printf("Ban co muon thuc hien lai cn nay khong 1 = co || khac = khong: ");
            int i;
            scanf("%d", &i);
            if (i != 1)
            {
                break;
            }
        }
    } while (chon != 0);
    return;
}


// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184