#include <iostream>
using namespace std;
int multiply(int number);

main()
{
  int number;
  int product;
  cout << "Enter number:";
  cin >> number;
  product = multiply(number);
  cout << "Product is:" << product << endl;
}
int multiply(int number)
{
  int product;
  product = 5 * number;
  return product;
}

