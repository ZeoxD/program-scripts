#include <iostream>
using namespace std;

main()
{
    int a;
    int b;
    float c;
    float d;

    cout << "Enter interger values: ";
    cin >> a >> b;
    cout << "Enter float values: ";
    cin >> c >> d;

    b = a;
    c = a;
    d = a;

    cout << "The values are: " << a << " " << b << " " << c << " " << d << endl;

}