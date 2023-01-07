/* 
====================================================
-- 013 - Variables – Constant Variable 
-- link : https://youtu.be/zBhT544Xy0o
==================================================

*/
/*
  Constant Variable
  - Read Only Value
  - Can't Declare Without Value
*/

#include <iostream>
using namespace std;
#define DAYS 9

int main()
{
  const int day = 8;
  // int salary = 15000;
  const int num = 100;
  // num = 200;
  cout << num;
  // const int x;
  cout << "\n" << DAYS;
  return 0;
}