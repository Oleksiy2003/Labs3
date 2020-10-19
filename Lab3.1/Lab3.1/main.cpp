// Lab_03_1.cpp
// < Лопацький Олексій >
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 9

#include <iostream>

#include <cmath>

using namespace std;
int main(int argc,
  const char * argv[]) {
  double x, y, A, B;

  cout << "x=";
  cin >> x;
  A = 2 * pow(abs(x), 3);

  if (x <= -0.1)
    B = 5 * cos(18 * x);
  if (x > 0.1 && x < 1.2)
    B = atan((x + 2) / 5);
  if (x >= 1.2)
    B = cos(x + 18);

  y = A + B;
  cout << "1)" << y;
  //----------------------------------------------------

  if (x <= -0.1)
    B = 5 * cos(18 * x);
  else if (x > 0.1 && x < 1.2)
    B = atan((x + 2) / 5);
  else
    B = cos(x + 18);

  cout << "1)" << y;

  cout << "Hello, World!\n";
  return 0;
}
