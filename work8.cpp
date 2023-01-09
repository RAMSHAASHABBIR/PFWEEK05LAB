  #include <iostream>
  #include <cmath>
  using namespace std;
  main()
  {
  float degree;
  float radian;
  float height;
  float distance;
  degree = 57.2958;
  radian = 1.0;
  cout <<"enter degree :";
  cin >> degree;
  tan(degree);
  cout <<"degree is:" << tan(degree);
  cout <<"enter distance:";
  cin >> distance;
  height = distance*tan(degree);
  cout << "height is:" << height;
  }
  