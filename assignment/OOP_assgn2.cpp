#include<iostream>
#include<string>
using namespace std;
class student{
  public:
  int rno;
  float marks;
  string name;
  void display(){
    cout<<"name: "<<name<<endl;
    cout<<"roll no: "<<rno<<endl;
    cout<<"marks: "<<marks<<endl;
  }
};
int main(){
  student s1;
  s1.name="Vandit";
  s1.rno=41;
  s1.marks=92.0;
  s1.display();
  return 0;
}