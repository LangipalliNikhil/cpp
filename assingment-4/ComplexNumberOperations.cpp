#include <iostream>
using namespace std;

class ComplexNumberOperations{
    private:
    int real1;
    float imag1;
    int real2;
    float imag2;

    public:
    void add();
    void sub();
    void mul();
    void getvalues();
    void display();
    

};

void ComplexNumberOperations::getvalues(){

    cout<<"enter the real1 part of complex number : ";
    cin>>real1;
    cout<<"enter the imaginary1 part of complex number : ";
    cin>>imag1;
    cout<<"enter the real2 part of complex number : ";
    cin>>real2;
    cout<<"enter the imaginary2 part of complex number : ";
    cin>>imag2;

}
 void ComplexNumberOperations::add(){
    cout<<"the addition of two complaex numbers are : ";
    cout<<(real1+real2)<<"+"<<(imag1+imag2)<<'i'<<endl;

}

void ComplexNumberOperations::sub(){
    cout<<"the subraction  of two complaex numbers are : ";
    cout<<(real1-real2)<<"+"<<(imag1-imag2)<<'i'<<endl;

    
}

void ComplexNumberOperations::mul(){
    cout<<"the addition of two complaex numbers are : ";
    cout<<(real1*real2)+(-1*(imag1*imag2))<<'+'<<(real1*imag2)+(real2*imag2)<<'i';
}

void ComplexNumberOperations::display(){
    add();
    sub();
    mul();
   
}

int main(){
    ComplexNumberOperations com;
    com.getvalues();
    com.display();

    return 0;
}