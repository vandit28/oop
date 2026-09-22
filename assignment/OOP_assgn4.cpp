#include<iostream>
#include<string>
using namespace std;
class bookstore{
  public:
  string book_name;
  char shelf;
  int price;

  bookstore(string book_name,char shelf,int price){
    this->book_name=book_name;
    this->shelf=shelf;
    this->price=price;
  }

  void display(){
    cout<<"name of book: "<<book_name<<endl;
    cout<<"book is in "<<shelf<<"shelf"<<endl;
    cout<<"price of book: "<<price<<"$"<<endl;
  }
};
int main(){
  bookstore b1 ("harry potter",'F',35);
  bookstore b2("beautiful world",'B',20);
  b1.display();
  cout<<"---------------------------------------"<<endl;
  b2.display();
  return 0;

}