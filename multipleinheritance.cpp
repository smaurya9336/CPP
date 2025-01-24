#include<iostream>
#include<string>
using namespace std;


class Student{
    public:
    string name;
    int rollno;

};

class Teacher{
    public:
    double salary;

};
// multiple inheritance
class TA : public Student, public Teacher{
 public:

 void getInfo(){
    cout<<"name: "<<name<<endl;
    cout <<"rollno: "<<rollno<<endl;
    cout<<"salary: "<<salary<<endl;

   }
};

int main(){
    TA t1;
    t1.name="Akash";
    t1.rollno=123;
    t1.salary=35000;
    t1.getInfo();
    return 0;
}