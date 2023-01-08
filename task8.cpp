#include <iostream>
using namespace std;
int inEnglish(int N1, int N2);
main()
{
    int number;
    int result;
    int N1;
    int N2;
    int n0;
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;

    cout << "Enter number:";
    cin >> number;
    result = inEnglish(N1,N2);
}
int inEnglish(int N1, int N2)
{
    int n0 = 0;
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    int n4 = 4;
    int n5 = 5;
    int n6 = 6;
    int n7 = 7;
    int n8 = 8;
    int n9 = 9;
    int number;
    int result;
    N1 = number % 10;
    N2 = number / 10 ;
    if(N2 == n1)
    {
        cout << "ten" << endl;
    }
    if(N2 == n2)
    {
        cout << "twenty ";
    }
    if(N2 == n3)
    {
        cout << "thirty ";
    }
    if(N2 == n4)
    {
        cout << "forty ";
    }
    if(N2 == n5)
    {
        cout << "fifty ";
    }
    if(N2 == n6)
    {
        cout << "sixty ";
    }
    if(N2 == n7)
    {
        cout << "seventy ";
    }
    if(N2 == n8)
    {
        cout << "eighty ";
    }
    if(N2 == n9)
    {
        cout << "ninty ";
    }
    if(N1 == n1)
    {
        cout << "one" << endl;
    }
    if(N1 == n2)
    {
        cout << "two" << endl;
    }
    if(N1 == n3)
    {
        cout << "three" << endl;
    }
    if(N1 == n4)
    {
        cout << "four" << endl;
    } 
    if(N1 == n5)
    {
        cout << "five" << endl;
    }
    if(N1 == n6)
    {
        cout << "six" << endl;
    }
    if(N1 == n7)
    {
        cout << "seven" << endl;
    }
    if(N1 == n8)
    {
        cout << "eight " << endl;
    }
    if(N1 == n9)
    {
        cout << "nine" << endl;
    }
    return result;
}