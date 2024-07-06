/**
 *
 *
 * التكليف 04

    لديك Array فيها مجموعة من الأرقام
    عناصر ال Array يمكن أن تتغير وسوف نضع ثلاث أمثلة لتجربة ال Code
    قم بفحص إذا كان حاصل جمع الرقم الأول والأخير أكبر من الرقم الأوسط قم بطباعة الرسالة كما في المثال
    إذا لم يتحقق الشرط السابق قم بفحص إذا كان حاصل جمع الرقم الثاني والرقم قبل الأخير أكبر من الرقم الأوسط قم بطبع الرسالة كما في المثال
    إذا لم تتحقق الشروط السابقة قم بطباعة الرقم الأوسط

// Example 1
int vals[]{100, 200, 250, 400, 200};

// Needed Output
"First Number + Last Number Is Larger Than Middle Number"
"100 + 200 = 300"
"300 > 250"

// Example 2
int vals[]{100, 200, 500, 400, 200};

// Needed Output
"Second Number + Before Last Number Is Larger Than Middle Number"
"200 + 400 = 600"
"600 > 500"

// Example 3
int vals[]{100, 200, 600, 400, 200};

// Needed Output
"Middle Number Is The Largest"
"600"
 */

#include <iostream>

using namespace std;

int main()
{
    // Example 1
    // int vals[]{100, 200, 250, 400, 200};
    // Example 2
    // int vals[]{100, 200, 500, 400, 200};
    // Example 3
    int vals[]{100, 200, 600, 400, 200};
    int first = 0;
    int last = sizeof(vals) / 4 - 1;
    int middle = (sizeof(vals) / 4) / 2;
    int result = vals[first] + vals[last];
    if (result > vals[middle])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number\n";
        cout << vals[first] << " + " << vals[last] << " = " << result << "\n";
        cout << result << " > " << vals[middle] << "\n";
    }
    else
    {
        first++;
        last--;
        result = vals[first] + vals[last];
        if (result > vals[middle])
        {
            cout << "Second Number + Before Last Number Is Larger Than Middle Number\n";
            cout << vals[first] << " + " << vals[last] << " = " << result << "\n";
            cout << result << " > " << vals[middle] << "\n";
        }
        else
        {
            cout << "Middle Number Is The Largest\n";
            cout << vals[middle] << "\n";
        }
    }

    return 0;
}
