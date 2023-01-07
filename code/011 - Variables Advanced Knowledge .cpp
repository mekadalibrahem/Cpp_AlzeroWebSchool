/* 
====================================================
-- 011 - Variables Advanced Knowledge 
-- link : https://youtu.be/J_vnlD5Ca-U
==================================================

*/

/*
  Variables Advanced Knowledge
  - Declare Variable Without Value + Change Later
  - Declare Multiple Variables Without Value + Change Later
  - Declare Multiple Variables With Same Value
*/

#include <iostream>
using namespace std;

int main()
{
  int a;
  a = 100;
  cout << a; // 100

  cout << "\n================\n";

  int b, c, d;
  b = 10, c = 20, d = 30;
  cout << b + c + d; // 60 => [10 + 20 + 30]

  cout << "\n================\n";

  int e, f = 40, g;
  e = 20, g = 60;
  cout << e + f + g; // 120

  cout << "\n================\n";

  int h, i, j;
  // h = 10, i = 10, j = 10;
  h = i = j = 10;
  cout << h + i + j; // 30

  return 0;
}