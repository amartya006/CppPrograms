#include<bits/stdc++.h>
using namespace std;

class FunctionOverloading{
    public:
        void fun(){
            cout<<"The Function wih No arguement"<<endl;
        } 
        void fun(int a){
            cout<<"Function with Integer Arguement"<<endl;
        }
        void fun(int a, int b){
            cout<<"Function with Two Arguements"<<endl;
        }
};

// Virtual Functions (Runtime Polymorphism)
class BaseClass{
    public:
        virtual void print(){
            cout<<"This is Printing Function"<<endl;
        }
        void display(){
            cout<<"This is Dispay Function"<<endl;
        }
};

class DerivedClass: public BaseClass{
    public:
        void print(){
            cout<<"This is Printing Function again"<<endl;
        }
        void display(){
            cout<<"This is Dispay Function 2 again"<<endl;
        }
};

int main(){
    BaseClass *baseptr;
    DerivedClass obj;
    baseptr = &obj;
    baseptr -> print();
    baseptr -> display();
    
   


    return 0;
}