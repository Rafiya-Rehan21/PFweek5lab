#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight(float angle, float distance);

main()
{
  float height;
  float degree;
  float distance;
  height = calculateHeight(degree,distance);
  cout << "Height of tree is:" << height << endl;
  
}
float calculateHeight(float angle, float distance)
{
  float height;
  float radians;
  float degree;
  float reqAngle;
  cout << "Enter distance from tree:";
  cin >> distance;
  cout << "Enter angle of elevation:";
  cin >> degree;
  radians = (degree/57.29);
  reqAngle = tan(radians);
  cout << "ANGLE IS" << reqAngle << endl;
  height = (reqAngle * distance);
  return height;
}