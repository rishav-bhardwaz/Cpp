#include <iostream>
using namespace std;

int main(){
 cout<< " enter a number x to find sum of all number till x : ";
    int x;
    cin>>x;

    int y = 0;
   
    for( int counter=1;counter<=x;counter++){
        y=y+counter;
    }
    {
        cout << " the result is : ";
    cout<<y;
    }

}