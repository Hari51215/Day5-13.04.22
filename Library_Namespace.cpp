#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

namespace library
{
    class books;
    class students;
}

class library::books
{
    int book_num;
    public:
        void set_bookdetails(int b_num)
        {
            book_num=b_num;
            if(book_num==1||book_num==2||book_num==3)
                cout<<"Go to the First floor of the Library"<<endl;
            else if(book_num==4||book_num==5)
                cout<<"Go to the Second floor of the Library"<<endl;
            else if(book_num==6||book_num==7)
                cout<<"Go to the Third floor of the Library"<<endl;
            else
            {
                cout<<"Sorry, Currently the book is not available ... "<<endl;
                cout<<"Kindly choose the books as mentioned in the subject list"<<endl;
                exit (0);
            }
        }

};

class library::students : public library::books
{
    string stu_name;
    int stu_rollno;
    public:
        void set_studentdetails(string s_name,int rollno)
        {
            stu_name=s_name;
            stu_rollno=rollno;
        }

};


using namespace library;

int main()
{
    string s_name;
    int rollno,b_num;
    cout<<"Enter the Student Name : "<<endl;
    cin>>s_name;
    cout<<"Enter the Student Roll Number : "<<endl;
    cin>>rollno;
    cout<<"Name the Subject Book, you wants to learn : "<<endl;
    cout<<"Available Subject Books are ... \n1.Mathematics\n2.Physics\n3.Chemistry\n4.Computer Science\n5.Commerce\n6.Botany\n7.Zoology"<<endl;
    cin>>b_num;

    students s1;
    s1.set_studentdetails(s_name,rollno);
    s1.set_bookdetails(b_num);
    return 0;
}