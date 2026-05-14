#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    string email;
    // private:
    string reg_no;
    Student(string name_, string email_, string reg_no_){
        name=name_;
        email=email_;
        reg_no=reg_no_;
    }
    public:
    void displayDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Registration Number: "<<reg_no<<endl;
    }
    // public:
    // string getRegNo(){
    //     return reg_no;
    // }
    // public:
    // void setRegNo(string newReg){
    //     reg_no=newReg;
    // }
};
// creating objects of the class
int main(){
    // Student student1,student2,student3;
    // student1.name="Kokushibo";
    // student1.email="kokushibo@gmail.com";
    // // student1.reg_no="12345";
    // student2.name="Doma";
    // student2.email="doma@gmail.com";
    // // student2.reg_no="67890";
    // student3.name="Akaza";
    // student3.email="akaza@gmail.com";
    // // student3.reg_no="123456";
    Student student1("Kokushibo","kokushibo@gmail.com","12345");
    Student student2("Doma","doma@gmail.com","67890");
    Student student3("Akaza","akaza@gmail.com","123456");
    student1.displayDetails();
    student2.displayDetails();
    student3.displayDetails();
};
    