#include<iostream>
#include<string>
using namespace std;
class bookstore
{
public:
string bookname;
string language;
string price;
string publisher;
string genre;
void display()
{
     cout<<"name of the book is:";
     cin>>bookname;
     cout<<"language: ";
     cin>>language;
     cout<<"author is :";
     cin>>publisher;
     cout<<"genre:";
     cin>>genre;
     cout<<"the price of book is 35$";
}
};
int main()
{
     bookstore harry_potter;
     harry_potter.display();
     return 0;
}




