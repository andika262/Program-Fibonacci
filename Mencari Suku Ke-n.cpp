#include <iostream>
using namespace std;

int main(){
  int i;
  int n;
  int xn;
  int a;
  int b;
  
  cout << " --PROGRAM MENGHITUNG BARISAN DERET PADA FIBONACCI--"<<endl;
  cout << "----------------------------------------------------"<<endl;
  cout << "\n";
  cout << "Masukan Nilai dari suku Pertama : ";
  cin >> a;
  cout << "Masukan Nilai dari suku Kedua : ";
  cin >> b;
  cout << "Masukan Nilai dari suku ke-n : ";
  cin >> n;


  cout << b << " ";
  cout << a << " ";
  for(i=1; i < n; i++){
    xn = a + b;
    b = a;
    a = xn;
    cout << xn << " ";
  }
  cout << "\n";
  cin.get();
  return 0;
}
