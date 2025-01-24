#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;
// dynamic memory allocation using heap

Student(string name, double cgpa){
    this->name=name;
    cgpaPtr= new double;
    *cgpaPtr=cgpa;

}

Student(Student &obj){
    this->name= obj.name;
    cgpaPtr=new double; //deep copy
    *cgpaPtr=*obj.cgpaPtr; //deep copy
}

void getInfo(){
    cout<<"name:"<<name<<endl;
    cout<<"cgpa"<<*cgpaPtr<<endl;
}
~Student(){
    cout<<"i am a destructor"<<endl;
    delete cgpaPtr;  // used for new keyword
    cout<<"delete everything"<<endl;
}
};

int main(){
    Student s1("harsh verma", 9.2);
    Student s2(s1);
    *(s2.cgpaPtr)=8.9;
    s2.name="Sarita";
    s1.getInfo();
    s2.getInfo();
    return 0;

}