// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void kiemTrasonguyen()
{
    system("cls");
    // Kiem tra so nguyen
    float x;
    //nhap x
    printf("Moi nhap x: ");
    scanf("%f", &x);
    // kiem tra so
    if (x == (int)x)
    {
        printf("%d la so nguyen\n", (int)x);
        // kiem tra so nguyen to
        int flag = 1;
        int soNguyenx = (int)x;
        for (int i = 2; i < x; i++)
        {
            if (soNguyenx % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%d la so nguyen to\n", soNguyenx);
        }
        else
        {
            printf("%d khong phai la so nguyen to\n", soNguyenx);
        }
        if (pow((int)sqrt(soNguyenx), 2) == soNguyenx)
        {
            printf("%d la so chinh phuong\n", soNguyenx);
        }
        else
        {
            printf("%d khong phai so chinh phuong\n", soNguyenx);
        }
    }
    else
    {
        printf("%f khong la so nguyen\n ", x);
    }
}
void timUOcvaboi()
{
    system("cls");
    // uoc chung va boi chung
    int a, b;
    // moi nhap
    printf("Moi nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Moi nhap so thu hai: ");
    scanf("%d", &b);
    // tinh toan
    int x = a, y = b;
    while (y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    int ucln = x;
    int bcnn = (a * b) / ucln;
    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);
}
void tinhTienchoquan()
{
    system("cls");
    // khai bao 
    int gioBatdau, gioKetthuc;
    int thoiGian;
    // nhap du lieu
    do
    {
        printf("Gio bat dau vao: ");
        scanf("%d", &gioBatdau);
        printf("Gio ket thuc ra: ");
        scanf("%d", &gioKetthuc);
    } while (gioBatdau < 12 || gioKetthuc > 23 || gioBatdau >= gioKetthuc);
    // tinh toan
    thoiGian = gioKetthuc - gioBatdau;
    if (14 <= gioBatdau && gioBatdau <= 17)
    {
        if (thoiGian <= 3)
        {
            printf("Tien: %d\n", thoiGian * 15000 * 9);
        }
        else
        {
            printf("Tien: %d\n", 3 * 15000 * 9 + (thoiGian - 3) * 15000 * 6);
        }

    }
    else
    {

        if (thoiGian <= 3)
        {
            printf("Tien: %d\n", thoiGian * 150000);
        }
        else
        {
            printf("Tien: %d\n", 3 * 150000 + (thoiGian - 3) * 15000 * 7);
        }

    }
}
void tinhTiendien()
{
    system("cls");
    // khai bao 
    int soDien;
    // nhap
    printf("Moi nhap so dien: ");
    scanf("%d", &soDien);
    // tinh toan
    if (soDien <= 50)
    {
        printf("So tien: %d \n", soDien * 1678);
    }
    else if (soDien <= 100)
    {
        printf("So tien: %d\n", 50 * 1678 + (soDien - 50) * 1734);
    }
    else if (soDien <= 200)
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014);
    }
    else if (soDien <= 300)
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536);
    }
    else if (soDien <= 400)
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soDien - 300) * 2834);
    }
    else
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soDien - 400) * 2927);
    }
}
void doiTien()
{

}
void tinhLaixuatvaynganhang()
{

}
void vayTienmuaxe()
{

}
void sapxepThongtin()
{

}
void xayDunggame()
{

}
void chuongTrinhtinhtoanphanso()
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
        printf("Bang Menu\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin nhan vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("0. Thoat!!!\n");
        // Chon CN
        printf("Moi chon chuc nang: ");
        scanf("%d", &chon);
        // Thuc hien CN
        while (1)
        {

            switch (chon)
            {
            case 1:
                kiemTrasonguyen();
                break;
            case 2:
                timUOcvaboi();
                break;
            case 3:
                tinhTienchoquan();
                break;
            case 4:
                tinhTiendien();
                break;
            case 5:
                doiTien();
                break;
            case 6:
                tinhLaixuatvaynganhang();
                break;
            case 7:
                vayTienmuaxe();
                break;
            case 8:
                sapxepThongtin();
                break;
            case 9:
                xayDunggame();
                break;
            case 10:
                chuongTrinhtinhtoanphanso();
                break;
            case 0:
            {
                printf("--Thoat--!");
                exit(0);
                break;
            }
            default:
            {
                printf("Ban nhap sai. Xin vui long nhap lai tu [1-10]!!!");
                break;
            }
            system("pause");

            }
            printf("Ban co muon thuc hien lai cn khong 1 = co || khac = khong: ");
            int i;
            scanf("%d", &i);
            if (i != 1)
            {
                break;
            }
        }
        // hoi nguoi dung muon tiep tuc khong
        //int tiepTuc;
        //printf("Ban có muon tiep tuc khong? 1 = co || khac = khong\n ");
        //printf("Lua chon: ");
        //scanf("%d", &tiepTuc);
        //// dieu kien
        //if (tiepTuc != 1)
        //{
        //    printf("Cam on ban da su dung chuong trinh!\n");
        //    break;
        //}
    } while (chon != 0);

    return(0);
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