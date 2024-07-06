/*
التكليف 09 تحدي

    لدينا Array كما في المثال ونحتاج أن تجلب عدد عناصر ال Array بأكثر من طريقة
    إستخدم المساعدة بالأسفل لتبحث وتصل للحل

int nums[] = {10, 20, 30, 40, 20, 50};

// Method 1
6

// Method 2
6

// Method 3
6


*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int nums[] = {10, 20, 30, 40, 20, 50};

    int size;
    // Method 1
    size = sizeof(nums) / sizeof(nums[0]);
    cout << size << "\n";
    // Method 2
    size = end(nums) - begin(nums);
    cout << size << "\n";
    // Method 3
    size = *(&nums + 1) - nums;
    cout << size << "\n";

    // explain for method 3
    // use memory address
    cout << &nums << "\n";
    cout << &nums + 1 << "\n";
    cout << *(&nums + 1) << "\n";

    return 0;
}
