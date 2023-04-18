#include <stdio.h>

int main() {
  int myArray[5] = {1, 2, 3, 4, 5};

  cout << "Array elemanlari: ";
  for(int i = 0; i < 5; i++) {
    cout << myArray[i] << " ";
  }
  cout << endl;

  return 0;
}
