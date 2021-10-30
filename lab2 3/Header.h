#include<iostream>
using namespace std;
const int MAX = 100;
struct DaySo {
	int a[MAX];
	int n;
};

bool ktSoNguyenTo(int n);
void nhapDS(DaySo& ds);
void xuatDS(DaySo ds);
int tongSoNguyenTo(DaySo ds);
void xuatAmDuongVa0(DaySo ds);