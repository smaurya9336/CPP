#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // data hiding
    private:
    double salary;

  // Encapsulation    data function
    public:
    string name;
    string dept;
    string subject;
   


   // setter
void setSalary(int s){
    salary=s;
}
// getter
int getSalary(){
    return salary;
}

// member function
void changeDept(string newDept){
    dept= newDept;
}

};

int main(){
    Teacher t1;
    t1.name="Sarita Maurya";
    t1.dept="CSE";
    t1.subject="C++";
    t1.setSalary(30000);
    cout << "Name:"<<t1.name<<endl;
    cout << "Department:"<<t1.dept<<endl;
    cout << "Subject:"<<t1.subject<<endl;
    cout << "Salary:" << t1.getSalary()<<endl;
    return 0;
}












// int main(){
//     cout <<"sarita" <<endl;
//     return 0;
// }