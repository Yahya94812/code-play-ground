#include <iostream>
#include <string>

using namespace std;

//{this} is the special type of pointer that refer to the current obj
// this->prop = *(this).porp
class Student{
    public:
    string name;
    int rollNo;
    int marks;

    //non parameterized
    Student(){
        cout<<"this is constructor"<<endl;
    }

    //parameterized
    Student(string name, int rollNo, int marks){
        this->name=name;
        this->rollNo=rollNo;
        this->marks=marks;
    }

    void printDetail(){
        cout<<"DETAILS"<<endl;
        cout<<this->name<<endl<<this->rollNo<<endl<<this->marks<<endl;
    }
};

int main(){
    Student s1;
    Student s2("yahya",76,100);
    s2.printDetail();
    return 0;

}