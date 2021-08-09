#include<bits/stdc++.h>
using namespace std;

class Parent{
    public: 
        void func(){
            cout<<"Inherited"<<endl;
        }
    protected:
        void func2(){
            cout<<"Protected";
        }
};

class Child : public Parent{

};

int main(){
    Child a;
    a.func();
    
    return 0;
}