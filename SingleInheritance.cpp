#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

// non parameterized constructor
    //  Person(){
    //     cout<<"parent constructor"<<endl;
    //  }

    // parameterized constructor
    Person(string name, int age){
        this->name=name;
        this->age=age;

    }

};

class Student : public Person{
    public:
    int rollno;
    
// non parameterized constructor
    //  Student(){
    //    cout<<"child constructor"<<endl;
    //  }

// parameterized constructor

Student(string name, int age, int rollno): Person(name, age){
  this->rollno=rollno;

}

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }

};

int main(){

    Student s1("sarita", 23, 123);
    // Student s1;
    // s1.name="Sarita";
    // s1.age=23;
    // s1.rollno=123;
    s1.getInfo();
    return 0;
}