#include"Header.h"

void main()
{
	DaySo ds;
	nhapDS(ds);
	xuatDS(ds);
	cout << "\nTong cac phan tu la so nguyen to: " << tongSoNguyenTo(ds);
	xuatAmDuongVa0(ds);

	cout << endl;
	system("pause");
}