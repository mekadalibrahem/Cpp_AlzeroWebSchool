/*

التكليف 10

    لدينا Array كما في المثال ونحتاج أن نطبع قيمة أول عنصر في سطر وآخر عنصر في سطر تحته
    نحتاج أن نقوم بعمل المطلوب بثلاث طرق مختلفة وتخرج النتيجة كما في المثال بالأسفل
    ال Index الخاص بآخر عنصر يجب أن يتم جلبه بطريقة Dynamic أي لا تكتب الرقم بيدك

#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  "First: 10"
  "Last: 50"

  // Method 2
  "First: 10"
  "Last: 50"

  // Method 3
  "First: 10"
  "Last: 50"

  return 0;
}
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << "First: " << nums[0] << "\n";              // "First: 10"
    cout << "Last: " << nums[nums.size() - 1] << "\n"; // "Last: 50"

    // Method 2
    cout << "First: " << nums.front() << "\n"; // "First: 10"
    cout << "Last: " << nums.back() << "\n";   // "Last: 50"

    // Method 3
    // use * for return value from memory address ,which return by methods ( begin , ( end  - 1 ) )
    cout << "First: " << *(nums.begin()) << "\n";  // "First: 10"
    cout << "Last: " << *(nums.end() - 1) << "\n"; // "Last: 50"

    return 0;
}
