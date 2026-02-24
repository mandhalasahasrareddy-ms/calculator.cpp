#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n";
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1: cout<<"Sum = "<<a+b<<endl; break;
        case 2: cout<<"Difference = "<<a-b<<endl; break;
        case 3: cout<<"Product = "<<a*b<<endl; break;
        case 4: cout<<"Quotient = "<<a/b<<endl; break;
        case 5: cout<<"Remainder = "<<a%b<<endl; break;
        default: cout<<"Invalid choice!"<<endl;
    }
    return 0;
}
