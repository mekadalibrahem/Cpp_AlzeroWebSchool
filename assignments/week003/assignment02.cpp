// التكليف 02

// لدينا المتغير التالي ونوعه Double
// في السطر الأول نريد إيجاد طريقة لإظهار عدد ال Bytes كما في المثال
// في السطر الثاني نريد إيجاد طريقة لإظهار عدد ال Bits كما في المثال
// Example
// double salary = 5000.98;
// 8 Bytes
// 64 Bits

// ===================================================================================================
// solution
#include <iostream> 


int main(){
  double salary = 5000.98;
    std::cout<<  sizeof(salary)<<" Bytes \n"  ; // 8 Bytes
    std::cout<<sizeof(salary)*8<<" Bit \n"; // 64 Bits

    return 0;

}
