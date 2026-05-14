#include <iostream>
using namespace std;

class Student{
    private:
    string reg_no;
    public:
    string email;
    int marks;
    string grade;
    string name;
    Student(){
        name="";
        reg_no="";
        email="";
        marks=0;
        grade="";
    }
    Student(string name_, string reg_no_, string email_, int marks_){
        name=name_;
        reg_no=reg_no_;
        email=email_;
        marks=marks_;        
    }
    string getRegNo(){
        return reg_no;
    }
    void setRegNo(string newReg){
        reg_no=newReg;
    }
    void calculateGrade(){
        if(marks>=90){
            grade="A";
        }
        else if(marks>=80){
            grade="B";
        }
        else if(marks>=70){
            grade="C";
        }
        else if(marks>=60){
            grade="D";
        }
        else{
            grade="F";
        }
    }
    void displayDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Registration Number: "<<reg_no<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
    void highestMarks(Student students[], int numStudents){
        int highest=0;
        for(int i=1; i<numStudents; i++){
            if(students[i].marks>students[highest].marks){
                highest=i;
            }
        }
        cout<<"Student with the highest marks:"<<endl;
        students[highest].displayDetails();
    }   
};
int main(){
    int numStudents;
    cout<<"Enter the number of students: ";
    cin>>numStudents;
    Student students[numStudents];
    string name, reg_no, email;
    int marks;
    for(int i=0; i<numStudents; i++){
        cout<<"Enter details for student "<<i+1<<":"<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Registration Number: ";
        cin>>reg_no;
        cout<<"Email: ";
        cin>>email;
        cout<<"Marks: ";
        cin>>marks;
        students[i] = Student(name, reg_no, email, marks);
        students[i].calculateGrade();
    }
    students[0].highestMarks(students, numStudents);
    
}
        
