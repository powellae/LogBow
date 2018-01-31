#include <iostream>
#include<cmath>

using namespace std;

double function_1 (double b, double x)
{
  double m;
  m = sqrt(pow((pow(18,2) + (pow(b,2)))/(2*b),2) - pow((x-18),2)) + ((pow(18,2) - pow(b,2))/(2*b));

  return m;
}

int main ()
{
  double b, q [35], sum = 0;
  int n, i;

  cout << endl << endl << "--Modeling of Log-Bow--" << endl << endl << "Input the perpendicular measurement";
  cout << "of the log-bow , |b|, in inches to find the resulting measurements of each of the 36 pieces.";
  cout << endl << endl << "What is |b|? ";
  cin >> b;
  b = abs(b);
  cout << endl;

  for(n = 0; n <= 18; n++)
  {
    q[n] = abs(function_1(b, (n + 1)) - function_1(b, n));
    q[35-n] = abs(function_1(b, (36-n)) - function_1(b, 35-n));
    cout << "Q" << n + 1 << ": " << q[n] << "          Q" << 36 - n << ": " << q[35-n] << endl;
    sum = sum + q[n];
  }


  cout << endl << endl << endl;

  return 0;

}

