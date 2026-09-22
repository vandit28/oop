#include<iostream>
using namespace std;
#include<string>
class employee{
  public:
  string name;
  int experience;
  string role;
  char cabin;
  employee(int experience,string role,char cabin){
    this->experience=experience;
    this->role=role;
    this->cabin=cabin;
  }
  void display(){
    cout<<"name: ";
    cin>>name;
    cout<<"work experience: "<<experience<<"yrs."<<endl;
    cout<<"job role: "<<role<<endl;
    cout<<name<<" sits in "<<cabin<<" cabin"<<endl; 
  }
  ~employee(){
  cout<<"destructor called , temporary details destroyed"<<endl;
  cout<<"-----------THANKYOU :]-------------"<<endl;
  }
};
int main(){
  employee e1(5,"Tech Lead",'A');
  employee e2(3,"Senior engineer",'C');
  e1.display();
  cout<<"------X-------------X---------------X-----"<<endl;
  e2.display();
  return 0;
}


