#include <iostream>
#include<cmath>
using namespace std;

double function_1 (double b, double x)
{
  double m;
  m = sqrt((pow(18,2) + ((pow(b,2))/(2*b))) - pow((x-18),2)) + ((pow(18,2) - pow(b,2))/(2*b));

  return m;
}

int main ()
{
  double b, q [35], sum = 0;
  int n, i;

  cout << endl << "What is |b|? ";
  cin >> b;
  cout << endl;

  for(n = 0; n <= 35; n++)
  {
    q[n] = abs(function_1(b, (n + 1)) - function_1(b, n));
    cout << "Q" << n + 1 << ": " << q[n] << endl;
    sum = sum + q[n];
  }

  cout << endl << endl << "Sum: " << sum/2;

  cout << endl << endl << endl;

  return 0;

}
