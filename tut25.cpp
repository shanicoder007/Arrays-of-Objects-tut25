#include <iostream>
using namespace std;
class Employee
{

    int Id;
    int salary;

public:
    void setId(void)
    {
        salary = 150;
        cout << "Enter the Id of the employee:  " << endl;
        cin >> Id;
    }
    void getId(void)
    {

        cout << "The Id of the employee is:   " << Id << endl;
    }
};

int main()
{

    Employee bf[5];
    for (int i = 0; i < 5; i++)
    {
        bf.setId();
        bf.getId();
    }

    return 0;
}