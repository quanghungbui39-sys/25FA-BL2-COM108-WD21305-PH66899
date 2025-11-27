// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void tinhTrungbinh()
{
    // khai bao
    int n;
    int a[100];
    // moi nhap
    printf("Moi nhap phan tu: ");
    scanf("%d", &n);
    // nhap mang
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // tinh toan
    float tong = 0;
    float tb;
    int count = 0;
    // duyet mang
    for (int  i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            tong += a[i];
            count++;
        }
    }
    if (count > 0)
    {
        tb = tong / count;
        printf("Trung binh tong cac so chia het cho 3 la: %.2f\n", tb);
    }
    else
    {
        printf("Khong co phan tu nao chia het cho 3\n");
    }
    return 0;
}
int main()
{
    tinhTrungbinh();
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