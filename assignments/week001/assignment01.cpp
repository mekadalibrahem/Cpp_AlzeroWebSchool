// التكليف 01

//     لدينا اكثر من Code فيهم مشاكل تحتاج للتصليح أو إضافة الناقص وكل ما عليك كتابة ال Code السليم بعد التصليح
//     الهدف من التصليح معرفتك بال Syntax وطريقة كتابة ال Code والتعود على الفهم وليس الحفظ
//     ال Code التالي يحتوي على 7 أخطاء يجب عليك إصلاحهم لتخرج بالنتيجة في المثال في الأسفل

// include <"iostream">

// Main()
// {
//   std::out < "Line One/n";
//   std::out < "Line Two/n";
//   std::out < "Line Three/n";
//   return 0;
// }

// // Output

// Line One
// Line Two
// Line Three



// solution
//1- char '#' befor include  
//2-  iostream witout " "
#include <iostream> 
//3- [int]  befor main() 
//4- main not Main 

int main(){
    //5- cout not out 
    //6- << not < 
    //7- \n not /n
    std::cout<< "Line One\n";
    std::cout<< "Line Two\n";
    std::cout<< "Line Three\n";
    return 0;
}