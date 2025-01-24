#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;


// parameterized Constructor  
// constructor always define in public mode not private,protected

    Teacher(string name, string dept, string subject, double salary){
        // this keyword access the property of object

        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
        cout<<"I am Constructor"<<endl;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

int main(){
    Teacher t1("Sarita Maurya","CSE","Javascript",35000);
    // Teacher t2("Shalini", "IT","HTML",25000);
    // example of copy constructor
    Teacher t2(t1);    // default copy constructor
    // default copy constructor can create a shallow copy
    t1.getInfo();
    t2.getInfo();
    return 0;

}

/*
A Shallow cpoy of an object copies all of the member values from one object to another object
*/