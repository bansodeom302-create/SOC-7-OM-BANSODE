#include<iostream>
using namespace std;
class Book
{
public:
int book_ID;
string book_name;
Book(int b_id,string b_name)
{
book_ID=b_id;
book_name=b_name;
}
Book(Book & b)
{
book_ID=b.book_ID;
book_name=b.book_name;
}
void display()
{
cout<<"The book id is:"<<book_ID<<endl;
cout<<"The book name is:"<<book_name<<endl;
}
};
int main()
{
Book b1(123,"xyz");
Book b2(b1);
b1.display();
b2.display();
return 0;
}
