# include <iostream>
# include <cmath> 
using namespace std;

main()
{
  float num1;
  float num2;
  float result;
  cout << "Enter 1st number:";
  cin >> num1;
  cout << "Enter 2nd number:";
  cin >> num2;
  result = max(num1,num2);
  cout << "maximum:" << result << endl;
  result = min(num1,num2);
  cout << "minimum:" << result << endl;
  result = pow(2,3);
  cout << "result is:" << result << endl;
  result = floor(10.5);
  cout << "result is:" << result << endl;
  result = sqrt(4);
  cout << "result is:" << result << endl;
  result = cbrt(27);
  cout << "result is:" << result << endl;


  
} 
