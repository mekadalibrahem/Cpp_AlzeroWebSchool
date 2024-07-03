// int nums[]{100, 300, 600, 900};
// string awards[]{"iPhone", "iPad", "PC", "Car"};

// // Output Needed
// "Number 100 Award Is: iPhone"
// "Number 300 Award Is: iPad"
// "Number 600 Award Is: PC"
// "Number 900 Award Is: Car"


#include <iostream> 

using namespace std ;


int main(){
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};

    // way 1 
    cout<<"Number "<<nums[0]<<" Award Is: "<<awards[0]<<"\n";
    cout<<"Number "<<nums[1]<<" Award Is: "<<awards[1]<<"\n";
    cout<<"Number "<<nums[2]<<" Award Is: "<<awards[2]<<"\n";
    cout<<"Number "<<nums[3]<<" Award Is: "<<awards[3]<<"\n";
    

    return 0 ;
}
