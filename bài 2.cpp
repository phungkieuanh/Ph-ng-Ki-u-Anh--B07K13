// bài 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#define max 100

struct NhanVien
{
	int msnv;
	char ho[10];
	char ten[30];
	float luong;
	
};
typedef NhanVien nhanvien;
struct DanhSach
{
	nhanvien a[max];
	int n;
};
typedef DanhSach danhsach;
void menu();
void nhap1nv(nhanvien& nv);
void xuat1nv(nhanvien nv);
void nhapdanhsach(danhsach& ds);
void xuatdanhsach(danhsach ds);
int timMSNV(danhsach ds, int d);
void sapxep(danhsach ds);
void main();
{
	menu();
	
}
void menu()
{
	int ch;
	int d, k;
	danhsach ds;
	nhanvien x;
	nhapdanhsach(ds);
	xuatdanhsach(ds);
	printf("\n\t\t--------------MENU--------------");
	printf("\n\t2.Tim nhan vien theo ma so");
	printf("\n\t4.Bang luong cua  nhan vien tang dan");
	printf("\n\    *************************************************");

	switch (ch)
	{
		int d;
		danhsach ds;
		printf("\n\tNhap ma so can tim: ");
		scanf("%d", &d);
		int b = timMSNV(ds, d);
		if (timMSNV(ds, d) == -1)
			printf("\nkhong tim thay");
		else
			printf("\nTim thay nhan vien thu %d", b + 1);
	}
	void nhap1nv(nhanvien & nv);
	{
		printf("\nnhap vao msnv: ");
		scanf("%d", &nv.msnv);
		printf("\nnhap vao ho: ");
		fflush(stdin);
		gets(nv.ho);
		printf("\nnhap vao ten:");
		fflush(stdin);
		gets(nv.ten);
		printf("\nnhap vao luong: ");
		scanf("%f", &nv.luong);
		
	}
	void xuat1nv(nhanvien nv);
	{
		printf("\nma so nhan vien: %d", nv.msnv);
		printf("\nho: %s", nv.ho);
		printf("\nten: %s", nv.ten);
		printf("\nluong: %8.2f", nv.luong);
		printf("\nngay vao: ");
	}
	void nhapdanhsach(danhsach & ds);
	{
		printf("\nnhap so luong nhan vien: ");
		scanf("%d", &ds.n);
		printf("\n\t\t\tnhap thong tin nhan vien");
		for (int i = 0; i < ds.n; i++)
		{
			printf("\n\t\tnhan vien thu %d", i + 1);
			nhap1nv(ds.a[i]);
		}
	}
	void xuatdanhsach(danhsach ds);
	{
		printf("\n\t\t\tdanh sach nhan vien");
		for (int i = 0; i < ds.n; i++)
		{
			printf("\n\t\tnhan vien thu %d", i + 1);
			xuat1nv(ds.a[i]);
		}
	}
	int timMSNV(danhsach ds, int d);
	{
		for (int i = 0; i < ds.n; i++)
		{
			if (ds.a[i].msnv == d)
			{
				return i;
				break;
			}
		}
		return 0;
	}
	void sapxep(danhsach ds);
	{
		for (int i = 0; i < ds.n - 1; i++)
		
			
}
