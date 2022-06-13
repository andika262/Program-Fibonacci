#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	double n,x1,x2,p=0,q,r;
	
	cout << " --PROGRAM MENGHITUNG BARISAN DERET PADA FIBONACCI--"<<endl;
	cout << "----------------------------------------------------"<<endl;
	
	cout << "Masukan Suku Pertama : ";
	cin  >> x1;
	
	cout << "Masukan Suku Kedua : ";
	cin  >> x2;
	
	cout << "Masukan Nilai suku ke-n : ";
	cin  >> n;
	
	cout << "Deret Fibonacci sampai suku ke - " << n << " : ";
	
	q=x2;
	r=x1;
	for(int i=1; i<=n-2; i++){
		p = q + r;
		r = q;
		q = p;
	}
	if(n > 1 && n <= 68){
		printf("%.f \n\n", p);
	}
	else{
		printf("%.13e \n\n", p);
	}
	getch();
	// Menjaga agar tidak terjadi flashing
}
