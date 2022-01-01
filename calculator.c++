#include <iostream>
using namespace std; 
int main(){
    int x,y; 
    cout << "Enter numbers: ";

    cin >> x >> y;

    cout << "enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division : ";
    int z;
    cin >> z;
    if(z==1) {
        cout << " the sum of both number is : " << x + y ;
    }
    else if(z==2) {
        cout << "the result of substraction is : " << x - y ;
    
    }
    else if(z==3) {
        cout << " the result of product is : " << x * y ;

    }
    else if (z==4){
        cout << " the result of division is (quotient) : " << x / y ;
        cout << " (reminder) : " << x % y ;
    
    }
    return 0;

}