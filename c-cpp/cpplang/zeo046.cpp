#include<iostream>
using namespace std;

class Members
{
    public:
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
    Members mem;

    cout<<"\n";
    cin>>mem.fname;
    cin>>mem.lname;
    cin>>mem.age;

    cout<< "This person with name "<<mem.fname<<" "<<mem.lname<< " of age "<<mem.age<<" earns " <<mem.get_salary()<<" rupees per month,"<<" which is "<<mem.get_salary()*12<<" per year."<<endl;

    return 0;
}