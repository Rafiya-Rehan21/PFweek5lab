#include <iostream>
#include <cmath>
using namespace std;
float posQuadratic(float a, float b, float c);
float negQuadratic(float a, float b, float c);

main ()
{
  float a;
  float b;
  float c;
  float posX;
  float negX;
  cout << "Enter value of a:";
  cin >> a;
  cout << "Enter value of b:";
  cin >> b;
  cout << "Enter value of c:";
  cin >> c;
  posX = posQuadratic(a,b,c);
  cout << "Value of x is:" << posX << endl;
  negX = negQuadratic(a,b,c);
  cout << "Value of x is:" << negX << endl;
  
}
float posQuadratic(float a, float b , float c)
{
  float axc;
  float bsquare;
  float denominator;
  float value;
  float sqroot;
  float numerator;
  float posX;
  float d;
  d = 2.0;
  axc= 4.0*(a*c);
  bsquare = pow(b,d);
  denominator = d*a;
  value = (bsquare - axc);
  sqroot = sqrt(value);
  numerator = (-b + sqroot);
  posX = numerator / denominator;
  return posX;
}
float negQuadratic(float a, float b , float c)
{
  float axc;
  float bsquare;
  float denominator;
  float value;
  float sqroot;
  float numerator;
  float negX;
  float d;
  d = 2.0;
  axc= 4.0*(a*c);
  bsquare = pow(b,d);
  denominator = d*a;
  value = (bsquare - axc);
  sqroot = sqrt(value);
  numerator = (-b - sqroot);
  negX = numerator / denominator;
  return negX;
}




