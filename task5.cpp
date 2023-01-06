#include <iostream>
using namespace std;
int isSymmetrical(int number);

main()
{
  int number;
  int result;
  cout << "Enter three digit number:";
  cin >> number;
  result = isSymmetrical(number);
  
}
int isSymmetrical(int number)
{
  int n1;
  int n2;
  int n3;
  int N2;
  int N3;
  int result;
  n1=number % 10;
  cout << n1 << endl;
  N2= number/10;
  n2= N2 % 10;
  N3= N2 /10;
  cout << N3 << endl;
  n3= N3 %10;
  if(n1 == n3)
  {
     cout << "True" << endl;
  }
  if(n1 != n3)
  {
     cout << "False" << endl;
  }
}

