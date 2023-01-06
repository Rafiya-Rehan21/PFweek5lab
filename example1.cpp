#include <iostream>
using namespace std;
int isGreater(int num1, int num2);
int isMinimum(int num1, int num2);
main()
{
  int num1;
  int num2;
  int result;
  int result2;
  cout << "Enter 1st number:";
  cin >> num1;
  cout << "Enter 2nd number:";
  cin >> num2;
  result = isGreater(num1,num2);
  cout << result << " is greater number" << endl;
  result2 = isMinimum(num1, num2);
  cout << result2 << " is minimum number" << endl;
}
int isGreater(int num1, int num2)
{
  int result;
  if(num1 > num2)
  {
     return num1;
  }
  if(num2 > num1)
  {
     return num2;
  }
  return 0;
}

int isMinimum(int num1, int num2)
{
   int result2;
   if(num1 < num2)
   {
      return num1;
   }
   if(num2 < num1)
   { 
       return num2;
   }
     return 0;
}