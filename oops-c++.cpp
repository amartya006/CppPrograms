#include<bits/stdc++.h>
using namespace std;

class Student{
    //  Private Data Member
    public:
        string name; 
        int age;
        bool coder;

    // Setting up the Constructor
    Student(string s, int a, bool c){
        name = s;
        age = a;
        coder = c;
    };  //Parameterised Constructor

    //Default Constructor
    Student(){
        cout<<"Default h ye"<<endl;
    }

    //Copy Constructor
    Student(Student &a){
        cout<<"Copy COnstructor"<<endl;
        name = a.name;
        age= a.age;
        coder = a.coder;
        cout<<name<<" "<<age<<" "<<coder<<endl;
    }

    bool operator == (Student &a){
        if(name == a.name && coder == a.coder){
            return true;
        } else{
            return false;
        }
    }

    //To use private Data Member outside class
    void printData(){
        cout<<name<<" "<<age<<" "<<coder<<endl;
    }

    void setName(string s){
        name =s;
    }
};

// Concept of Encapsulation
class A{
    public:
        int a;
        void funcA(){
            cout<<"Public h ye"<<endl;
        }

    private:
        int b;
        void funcB(){
            cout<<"Private h ye"<<endl;
        }

    protected:
        int c;
        void funcC(){
            cout<<"I am Protected"<<endl;
        }

};


int main(){

    // Student a;
    // a.name = "Amartya";
    // a.age = 19;
    // a.coder = true;
    
    // Student arr[3];
    // for(int i=0; i<3; i++){
    //     string s;
    //     cin>>s>>arr[i].age>>arr[i].coder;
    //     arr[i].setName(s);
    // }

    // for(int i=0; i<3; i++){
    //     arr[i].printData();
    // }

    Student a("Amartya", 19, 1);
    Student b("Amartya", 20, 1);  //Default Constructor Usage

    Student c(a);
    // cout<<c.name<<" "<<c.coder<<" "<<c.age<<endl;
    // cout<<a.name<<" "<<a.coder<<" "<<a.age<<endl;

    if(b==a){
        cout<<"Same"<<endl;

    } else{
        cout<<"Not Same"<<endl;
    }

    A obj;
    obj.funcA();
    
    

    return 0;
}