#include <iostream>
using namespace std;

int main ()
{
	int a, b, c, d, e, f, g, h, i;
	cout<<"KALKULATOR SEDERHANA"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Pembagian"<<endl;
	cout<<"4. Perkalian"<<endl;
	cout<<"5. End"<<endl;
	
	cout<<"Pilih angka	: ";
	cin>>i;
	switch (i)
	{
		case 1 :
			{
				cout<<"Masukkan angka 1	: ";cin>>a;
				cout<<"Masukkan angka 2	: ";cin>>b;
				int x =  a + b;
				cout<<"Hasilnya adalah	: "<<x<<endl;
				break;
			}
		case 2 :
			{
				cout<<"Masukkan angka 1	: ";cin>>c;
				cout<<"Masukkan angka 2	: ";cin>>d;
				int y = c - d;
				cout<<"Hasilnya adalah	: "<<y<<endl;
				break;	
			}
		case 3 :
			{
				cout<<"Masukkan angka 1	: ";cin>>e;
				cout<<"Masukkan angka 2	: ";cin>>f;
				int z = e/f;
				cout<<"Hasilnya adalah	: "<<z<<endl;
				break;
			}
		case 4 :
			{
				cout<<"Masukkan angka 1	: ";cin>>g;
				cout<<"Masukkan angka 2	: ";cin>>h;
				int r = g * h;
				cout<<"Hasilnya adalah	: "<<r<<endl;
				break;
			}
		case 5 :
			{
				cout<<"End"<<endl;	
			}
	}
	return 0;
}
