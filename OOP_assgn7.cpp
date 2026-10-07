#include<iostream>
#include<string>
using namespace std;
class person{
  public:
  string name;
  int age;
  long long contact;
  void general(){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"phone no. "<<contact;
  }
};
class student:public person{
  public:
  int rollno;
  string branch;
  void specific(){
    cout<<"\nrollno: "<<rollno<<endl;
    cout<<"branch: "<<branch;
  }  
};

int main(){
student s1;
s1.name="Vandit";
s1.age=18;
s1.contact=9773277300 ;
s1.rollno=41;
s1.branch="BTECH SOAI-AI&ML";
s1.general();
s1.specific();
return 0;
}