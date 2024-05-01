// For Basic  to Class  conversion you first need to create a constructor
#include <iostream>

using namespace std;

class EmployeeExperience
{
private:
    int years;
    int months;

public:
    EmployeeExperience(float exp)
    {
        years = int(exp);
        months = int((exp - years) * 12);
    }

    void Display()
    {
        cout << "Employee Experience is " << years << " years " << months << " months " << endl;
    }
};

int main()
{
    float TotalExperience = 0;
    int years = 0, months = 0;
    cout << "Enter Employee Experience : ";
    cin >> TotalExperience;

    EmployeeExperience obj(TotalExperience);

    obj.Display();

    return 0;
}
