#include<iostream>
using namespace std;
#include<string>
class student{
  public:
  string name;
  int rno;
  char div;
  double attendance;
  float marks;
  
  student(int rno,double attendance,float marks){
    this->rno=rno;
    this->attendance=attendance;
    this->marks=marks;
  }
  void display(){
    cout<<"name of student is: ";
    cin>>name;
    cout<<"enter your division: ";
    cin>>div;
    cout<<"rollno. is: "<<rno<<endl;
    cout<<"attendane % of student is: "<<attendance<<endl;
    cout<<"marks of student is: "<<marks;
  }
  
};
int main(){
  student s1(41,83.33,92.0);
  s1.display();
  return 0;
}