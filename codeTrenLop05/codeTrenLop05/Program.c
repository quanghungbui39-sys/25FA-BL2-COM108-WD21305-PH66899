// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}
void sapXepPhantuMang()
{
	int integerArray[4];
	int tmp;
	//int mangSonguyen[100];// co mang la phai co vong lap
	int length;
	printf("Moi nhap mang: ");
	scanf("%d", &length);
	printf("Nhap du lieu cho mang %d phan tu \n", length);
	//int length = sizeof(mangSonguyen) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = ", i);
		scanf("%d", &integerArray[i]);
	}
	printf("Sap xep Tang dan du lieu mang %d phan tu\n", length);
	for (int i = 0; i < length - 1 ; i++)
	{
		if (integerArray[i] > integerArray[i+1])
		{
			tmp = integerArray[i];
			integerArray[i] = integerArray[i + 1];
			integerArray[i + 1] = tmp;
			i =  -1;
		}
	}
	printf("Xuat du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}
}
void demoMang2chieu()
{
	int array[2][3];
	for (int i = 0; i < 2 ; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("mang[%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
void demoString()
{
	// string
		char mangKyTu[10] = 'ANH';
	//scanf("%c"
	//gets(mangKyTu);
	while (getchar() != '\n');
	printf("Nhap du lieu String: ");
	fgets(mangKyTu, sizeof(mangKyTu), stdin);
	//loop + printf("%c\n"
	printf("%s", mangKyTu);
	printf("\n");
	// put(mangKyTu);
	printf("%d", strlen(mangKyTu) - 1);
	printf("\n");

	printf("%d", strcmp("A", "B"));
	printf("\n");
	char str[5] = "ABC";
	printf("%s", strrev(str));
	printf("\n");

	printf("%s", strlwr(str));
	printf("\n");

	printf("%s", strupr(str));
	printf("\n");

	printf(strstr("ABC", "D"));
	printf("\n");
}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepPhantuMang();
			break;
		case 3:
			demoMang2chieu();
			break;
		case 4:
			demoString();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf_s("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Sap xep phan tu mang 1 chieu");
		printf("\n");
		printf("3. Mang 2 chieu");
		printf("\n");
		printf("4. Demo chuoi ki tu");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-4]: ");
		scanf_s("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
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