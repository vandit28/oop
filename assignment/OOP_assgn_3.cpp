// HR DEPARTMENT ASSIGNMENT OOP
#include<iostream>
#include<string>
using namespace std;
class Employee{
  public:
  string name;
  int emp_id;
  string role;
  char cabin;
  string salary;
  void display()
  {
    cout<<"employee name: ";
    cin>>name;
    cout<<"employee's id: ";
    cin>>emp_id;
    cout<<"position employee: ";
    cin>>role;
    cout<<"employee sits in which cabin: ";
    cin>>cabin;
    cout<<"employee ctc/package: ";
    cin>>salary;
  }
  void show()
{
cout<<"--------------EMPLOYEE PROFILE------------------"<<endl;
cout<<"name of employee: "<<name<<endl;
cout<<"employee's id: "<<emp_id<<endl;
cout<<"position employee: "<<role<<endl;
cout<<"employee sits in which cabin: "<<cabin<<endl;
cout<<"employee ctc/package: "<<salary<<endl;
}
              };

int main(){
  Employee E1;
  Employee E2;
  E1.display();
  E2.display();
  E1.show();
  cout<<endl;
  E2.show();
  return 0;
          }