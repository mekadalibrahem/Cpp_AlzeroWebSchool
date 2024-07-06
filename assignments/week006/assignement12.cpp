/**
 * التكليف 12

    لدينا أكثر من Array ومجموعة من المتغيرات
    المطلوب أن تستخدم هذه المتغيرات لتصل لعناصر ال Array وتستخدم ما تعلمته لتخرج بالقيمة المطلوبة وهي رقم 150
    يمكنك إستعمال علامة الجمع + فقط لتخرج بالمطلوب
    ممنوع إستخدام أي أرقام من عندك ولا تغيير السطور الأولى الستة

// Do Not Edit The Next 6 Lines
int nums[] = {1, 2, 3, 5};
int vals[] = {10, 20, 40, 30, 10, 60};
int i1 = nums[3];
int i2 = nums[0];
int i3 = nums[1];
int i4 = nums[2];

// Need To Get Ouput 150
// You Can Use Plus Operator Only

// Your Code Here
 */

#include <iostream>

using namespace std;

int main()
{
    // Do Not Edit The Next 6 Lines
    int nums[] = {1, 2, 3, 5};
    int vals[] = {10, 20, 40, 30, 10, 60};
    int i1 = nums[3];
    int i2 = nums[0];
    int i3 = nums[1];
    int i4 = nums[2];

    // Need To Get Ouput 150
    // You Can Use Plus Operator Only
    // Your Code Here

    int result;
    result = vals[i1] + vals[i2] + vals[i3] + vals[i4];
    cout << result << "\n";
    return 0;
}
