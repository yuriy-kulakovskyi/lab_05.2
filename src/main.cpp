#include <iostream>
#include <iomanip>
#include <cmath>
#include "../include/main.h"

using namespace std;

int main()
{
  double xp, xk, x, dx, eps, s = 0;
  int n = 0;

  cout << "xp = "; cin >> xp;
  cout << "xk = "; cin >> xk;
  cout << "dx = "; cin >> dx;
  cout << "atan = "; cin >> eps;

  cout << fixed;
  cout << "-----------------------------------------" << endl;
  cout << "|" << setw(7) << "x" << " |"
  << setw(10) << "arctg(x)" << " |"
  << setw(10) << "S" << " |"
  << setw(5) << "n" << " |"
  << endl;
  cout << "-----------------------------------------" << endl;

  x = xp;
  while (x <= xk) {
    S(x, eps, n, s);
    cout << "|" << setw(7) << setprecision(3) << x << " |"
    << setw(10) << setprecision(5) << atan(x) << " |"
    << setw(10) << setprecision(5) << s << " |"
    << setw(5) << n << " |"
    << endl;

    x += dx;
  }

  cout << "-----------------------------------------" << endl;

  return 0;
}