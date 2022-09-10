#include <iostream>
using namespace std;

class Count {
   private:
    int value;
    int mint;
    int fint;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) , mint(10), fint(15) {}


    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) {
        ++value;
    }

    int display(){
        cout << "Count: " << value << endl;
        cout << "Count: " << mint << endl;
        cout << "Count: " << fint << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ (int)" function
    count1++;
    count1.display();

    // Call the "void operator ++ ()" function
    ++ count1;

    count1.display();
    return 0;
}