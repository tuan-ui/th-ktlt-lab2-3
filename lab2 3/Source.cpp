#include"Header.h"

bool ktSoNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++) 
		if (n % i == 0) 
			return false;
	return true;
}

void nhapDS(DaySo& ds)
{
	do {
		cout << "\nNhap so phan tu : ";
		cin >> ds.n;
		if (ds.n <= 0)
			cout << "\nNhap sai.Nhap lai.";
	} while (ds.n <= 0);
	for (int i = 0; i < ds.n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> ds.a[i];
	}
}

void xuatDS(DaySo ds)
{
	for (int i = 0; i < ds.n; i++)
		cout << ds.a[i] << " ";
}

int tongSoNguyenTo(DaySo ds)
{
	int t = 0;
	for (int i = 0; i < ds.n; i++)
		if(ktSoNguyenTo(ds.a[i]))
			t += ds.a[i];
	return t;
}

void xuatAmDuongVa0(DaySo ds)
{
	int am = 0, duong = 0, khong = 0;
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.a[i] == 0)
			khong++;
		else if (ds.a[i] > 0)
			duong++;
		else
			am++;
	}
	cout << "\nSo phan tu am la: " << am;
	cout << "\nSo phan tu duong la: " << duong;
	cout << "\nSo phan tu bang 0 la: " << khong;
}