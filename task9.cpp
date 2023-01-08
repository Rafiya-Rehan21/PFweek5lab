#include <iostream>
using namespace std;
float volume(float volumeFilled , float v, float p1, float p2, float hr);
main ()
{
    float result;
    float volumeFilled;
    float v;
    float p1;
    float p2;
    float hr;
    cout <<"Enter volume of pool:";
    cin >> v;
    cout << "Enter flow rate of 1st pipe in litres/hr:";
    cin >> p1;
    cout << "Enter flow rate of 2nd pipe in litres/hr:";
    cin >> p2;
    cout << "Enter number of hours:";
    cin >> hr;
    result = volume(volumeFilled, v, p1, p2, hr );
    
}
float volume(float volumeFilled,float v, float p1, float p2, float hr)
{ 
    float p1Volume;
    float p2Volume;
    int volumePercentage;
    int p1Percentage;
    int p2Percentage;
    float vol;
    float p1vol;
    float p2vol;
    float overflow;
    float result;
    p1Volume = p1 * hr;
    p2Volume = p2 * hr;
    volumeFilled = p1Volume + p2Volume;
    vol= volumeFilled / v;
    volumePercentage = vol * 100;
    p1vol = p1Volume / volumeFilled;
    p1Percentage = p1vol * 100;
    p2vol = p2Volume / volumeFilled;
    p2Percentage = p2vol * 100;
    if(volumeFilled <= v)
    {
    cout << "The pool is " << volumePercentage <<" % filled." << endl;
    cout << "p1= " << p1Percentage << "%" << endl;
    cout << "p2= " << p2Percentage << "%" << endl; 
    }
    
    if(volumeFilled > v)
    {
        overflow = volumeFilled - v;
        cout << "Pool is overflowed with " << overflow << "litres in " << hr << " hours" << endl; 
    } 
    return result;
    
}