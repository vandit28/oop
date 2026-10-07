#include<iostream>
#include<string>
using namespace std;
class person{
  public:
  string company_name;
  string location;
  void company(){
    cout<<"company name: "<<company_name<<endl;
    cout<<"location: "<<location<<endl;
  }

};
class employee:public person{
  public:
  string role;
  float salary;
  void general(){
    cout<<"role: "<<role<<endl;
    cout<<"salary is:"<<salary<<"k $"<<endl;
  }
};
class manager:public employee{
  public:
  string name;
  void specific(){
    cout<<"name of manager: "<<name<<endl;

  }
};
  int main(){
    manager m1;
   m1.company_name="Nvidia";
   m1.location="Manhattan";
   m1.role="manager";
   m1.salary=100;
   m1.name="Vandit";
   m1.specific();
   m1.general();
   m1.company();
   return 0;
  }