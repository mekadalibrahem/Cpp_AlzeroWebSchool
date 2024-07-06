/*
التكليف 05

    لدينا Array وسوف تتغير العناصر الخاصة بها
    نريد أن نعرف إذا كانت ال Array متناظرة أم لا "Palindrome"
    معنى متناظرة هنا أي أن العنصر الأول مثل الأخير والثاني مثل قبل الأخير وهكذا
    مستقبلا ستجد طرق سهلة لعمل هذا الطلب ولكن حاليا يمكنك عمله بواسطة ما تعلمته في ال Conditions
    لذلك الحل المطلوب نحتاج أن يعمل على ال 3 أمثلة الموجودين فقط حاليا

// Example 1
int vals[] = {100, 200, 600, 200, 100};

// Output
"Array Is Palindrome"

// Example 2
int vals[] = {100, 200, 200, 100};

// Output
"Array Is Palindrome"

// Example 3
int vals[] = {100, 300, 600, 200, 100};

// Output
"Array Is Not Palindrome"

*/

#include <iostream>

using namespace std;

int main()
{
    // Example 1
    // int vals[] = {100, 200, 600, 200, 100};
    // Example 2
    // int vals[] = {100, 200, 200, 100};
    // Example 3
    int vals[] = {100, 300, 600, 200, 100};

    int size = sizeof(vals) / 4;
    int first = 0;
    int last = size - 1;
    int meddle = size / 2;
    switch (size)
    {
    case 5:
        if (vals[first] == vals[last] && vals[++first] == vals[--last])
        {
            cout << "Array Is Palindrome" << "\n";
        }
        else
        {
            cout << "Array Is Not Palindrome" << "\n";
        }
        break;
    case 4:
        if (vals[first] == vals[last] && vals[++first] == vals[--last])
        {
            cout << "Array Is Palindrome" << "\n";
        }
        else
        {
            cout << "Array Is Not Palindrome" << "\n";
        }
    default:
        break;
    }

    return 0;
}
