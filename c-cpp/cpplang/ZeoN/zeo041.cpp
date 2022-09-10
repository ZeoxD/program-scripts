#include<iostream>
using namespace std;

struct User
{
        string fname;           //public: field
        string lname;           //public: field
        int age;                //public: field
        long get_salary()       //method
        {
            return salary;
        }

    private:
        long salary=85000;      //private: field
};

int main()
{
    User user;

    cout<<"\n";
    cin>>user.fname;
    cin>>user.lname;
    cin>>user.age;

    cout<< "This person with name "<<user.fname<<" "<<user.lname<< " of age "<<user.age<<" earns " <<user.get_salary()<<" rupees per month,"<<" which is "<<user.get_salary()*12<<" per year."<<endl;

    return 0;
}