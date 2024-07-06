/*
التكليف 13

    لديك مجموعة من المتغيرات تحتوي على أسماء
    نريد طباعة الأسماء بجانب بعضها كما في المثال بثلاث طرق مختلفة

string fName = "Elzero ";
string mName = "Web ";
string lName = "School";

// Output Needed
Elzero Web School
Elzero Web School
Elzero Web School

*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    cout << fName  << mName << lName << "\n";
    cout << fName  + mName  + lName + "\n";
    string name = "";
    name.append(fName);
    name.append(mName);
    name.append(lName);
    cout << name << "\n";

    return 0;
}
