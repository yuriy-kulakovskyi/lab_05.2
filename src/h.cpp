#include "../include/main.h"
#include <cmath>

void S(const double x, const double eps, int &n, double &s)
{
  n = 0;
  double a = x;
  s = a;
  do{
    n++;
    A(x, n, a);
    s += a;
  }while (abs(a) >= eps);
}

void A(const double x, const int n, double &a)
{
  const double R = (-1.0) * x * x * (2 * n - 1) / (2 * n + 1);
  a *= R;
}
