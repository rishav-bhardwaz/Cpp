#include<iostream>
using namespace std;

int main(){
    int x,y,z,a;
    cout<<"enter the number : "<<endl;
      cin>>a;
    cout<<"enter 1 to find square , enter 2 to find cube"<<endl;
  
    cin>>z;

      x=a*a;
    y=a*a*a;
    if (z==1){
    cout<<"square of number u entered is :  "<< x << endl;
    }

    else if (z==2){
        cout<<"cube of number u entered is : "<< y<< endl;

    }

    cout << "thanks for using ";

    return 0;


}