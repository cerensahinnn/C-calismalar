#include <stdio.h>
using namespace std;

int main() {
  const int SIZE = 5; // array boyutu
  int myArray[SIZE]; // kullanıcıdan alınacak elemanların saklanacağı array
  cout << "Lutfen " << SIZE << " adet tam sayi girin: " << endl;

  // Kullanıcıdan elemanları alma
  for(int i = 0; i < SIZE; i++) {
    cout << "Eleman " << i + 1 << ": ";
    cin >> myArray[i];
  }

  cout << "Girilen elemanlar: ";
  // Array elemanlarını yazdırma
  for(int i = 0; i < SIZE; i++) {
    cout << myArray[i] << " ";
  }
  cout << endl;

  return 0;
}

// << ve >>: << ve >> (akış operatörleri), C++ dilinde çıktı ve girdi akışını temsil eder. 
// << operatörü, cout nesnesine veriyi yazdırmak için kullanılırken, 
// >> operatörü, cin nesnesinden veriyi okumak için kullanılır. 
// << ve >> operatörleri, cout ve cin nesnelerine veri akışını sağlar ve verileri ekrana yazdırabilir 
// veya kullanıcıdan girdi alabiliriz.
