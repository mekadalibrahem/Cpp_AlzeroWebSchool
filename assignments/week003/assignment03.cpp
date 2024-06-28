// التكليف 03

/*
بإستخدام مكونات اللغة قم بطباعة ما يلي
السطر الأول Maximum Integer Number
السطر الثاني Minimum Integer Number
السطر الثالث Maximum Short Integer Number
السطر الرابع Minimum Short Integer Number
قم بطباعة كلمة Maximum أو Minimum قبل الرقم كما في المثال
// Output Needed
"Maximum Integer Number Is => 2147483647"
"Minimum Integer Number Is => -2147483648"
"Maximum Short Integer Number Is => 32767"
"Minimum Short Integer Number Is => -32768"

*/

// ===================================================================================================
// solution
#include <iostream> 
#include <limits.h>

int main(){
  double salary = 5000.98;
    std::cout<<  "Maximum Integer Number Is => " <<  INT_MAX  <<"\n"  ; 
    std::cout<<"Minimum Integer Number Is => "<< INT_MIN <<"\n";
        std::cout<<"Maximum Short Integer Number Is => "<< SHRT_MAX <<"\n";
            std::cout<<"Minimum Short Integer Number Is => "<< SHRT_MIN <<"\n";

    return 0;

}
