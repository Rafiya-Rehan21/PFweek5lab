#include <iostream>
using namespace std;
int OddishorEvenish(int number);
main()
{
    int number;
    int result;
    cout << "Enter a number:";
    cin >> number;
    result = OddishorEvenish(number);
}
int OddishorEvenish(int number)
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int N2;
    int N3;
    int N4;
    int N5;
    int sum;
    int result;
    n1= number %10;
    N2= number/10;
    n2= N2%10;
    N3 = N2 /10;
    n3 = N3 %10;
    N4 = N3 /10;
    n4 = N4%10;
    N5 = N4/10;
    n5 = N5%10;
    sum = n1 + n2 + n3 + n4 + n5;
    cout << sum << endl;
    if(sum%2==0)
    {
        cout << "Number is evenish" << endl;
    }
    if(sum%2 !=0)
    {
        cout << "Number is oddish" << endl;
    }
    return result;

}
