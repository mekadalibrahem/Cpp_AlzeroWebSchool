// assignment02

// لديك متغير بإسم Check يحتوي على رقم 25 سنستعمله لمقارنة الأرقام
// لديك Array فيها مجموعة من الأرقام. أول 3 أرقام يمكن أن يتغيروا
// نريد أن نفحص إذا كان أول رقم أكبر من 25 قيمة متغير Check نقوم بجمع أول رقم مع الرقم قبل الأخير
// إذا كان ثاني رقم أكبر من 25 قيمة متغير Check نقوم بجمع ثاني رقم مع الرقم قبل الأخير
// إذا كان ثالث رقم أكبر من 25 قيمة متغير Check نقوم بجمع ثالث رقم مع الرقم قبل الأخير
// إذا كان هناك أكثر من رقم من الأرقام الثلاثة الأولى أكبر من 25 يجب أن نمشي بالترتيب
// يجب إستخدام القيم الموجودة في عناصر ال Array لنطبع الرسالة كما في المثال
// يجب تقسيم الرسالة على 3 أسطر وكل سطر تستعمل فيه cout

// // Example 1
// int check = 25;
// int nums[]{40, 20, 30, 70, 100};

// // Ouput
// "{40} + {70} = 110"

// // Example 2
// int check = 25;
// int nums[]{20, 35, 30, 70, 100};

// // Ouput
// "{35} + {70} = 105"

// // Example 2
// int check = 25;
// int nums[]{20, 25, 30, 70, 100};

// // Ouput
// "{30} + {70} = 100"

#include <iostream>

using namespace std;

int main()
{

// way 01 
    // Example 1
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};

    int index_item = (sizeof(nums) / 4) - 2;
    if (nums[0] > check)
    {
        cout << "{" << nums[0] << "} + {" << nums[index_item] << "} = " << nums[0] + nums[index_item] << "\n";
    }
    // Example 2
    check = 25;
    nums[1] = 35;
    if (nums[1] > check)
    {
        cout << "{" << nums[1] << "} + {" << nums[index_item] << "} = " << nums[1] + nums[index_item] << "\n";
    }
    // Example 3
    check = 25;
    nums[2] = 30;
    if (nums[2] > check)
    {
        cout << "{" << nums[2] << "} + {" << nums[index_item] << "} = " << nums[2] + nums[index_item] << "\n";
    }



    return 0;
}
