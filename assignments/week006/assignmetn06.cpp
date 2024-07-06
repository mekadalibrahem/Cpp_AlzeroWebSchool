/**
 *
 * التكليف 06

    لدينا Array فيها بعض العناصر كما في المثال
    لدينا 4 سطور لطباعة قيم عناصر ال Array بعد تغييرها
    قم بعمل التعديلات اللازمة لتطبق السطور القيم الموجودة في تعليق بجانب كل سطر

int vals[] = {10, 20, 30};

// Write Your Code Here

cout << vals[0] << "\n"; // 100
cout << vals[1] << "\n"; // 200
cout << vals[2] << "\n"; // 300
 */

#include <iostream>

using namespace std;

int main()
{

    int vals[] = {10, 20, 30};

    // Write Your Code Here
    vals[0] *= 10;
    vals[1] *= 10;
    vals[2] *= 10;
    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
    return 0;
}
