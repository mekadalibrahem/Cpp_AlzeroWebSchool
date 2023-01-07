/* 
====================================================
-- 010 - Variables Naming Rules And Best Practices 
-- link : https://youtu.be/A6B4tlaPapo
==================================================

*/
/*
  Variables Naming Rules & Best Practices

  - Naming Rules
  --- Must Be Unique
  --- Case Sensitive
  --- Cannot Start With Numbers
  --- Nums Or Letters Or Underscore
  --- No White Space Or Special Characters
  --- Reserved Keywords "Class, Public"

  - Best Practices
  --- Related Names
  --- Writing Style
*/

#include <iostream>
using namespace std;

int main()
{
  int price = 100; // Declare A New Variable
  price = 200;     // Update The Value
  int Price = 400;
  cout << price;
  cout << "\n===============\n";
  int n1um1111 = 10;
  cout << n1um1111;
  cout << "\n===============\n";
  int _num_bers_ = 100;
  cout << _num_bers_;
  cout << "\n===============\n";
  int publics = 1000;
  cout << publics;
  cout << "\n===============\n";
  int OSAMA = 500; // Bad Style
  cout << OSAMA;
  cout << "\n===============\n";
  int x = 1000;
  cout << x;
  return 0;
}