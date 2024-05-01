#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

class Employee
{
private:
    int empId;
    string empName, qualification;
    float experience;
    long contactNumber;
    static float expSum;
    static float Average_Experience;
    static int counter;

public:
    Employee()
    {
        counter++;
    }

    static void avgExp()
    {
        Average_Experience = expSum / counter;
        cout << setw(30) << "Average experience of employees :" << Average_Experience;
    }

    void getData()
    {
        cout << "\nEnter employeeId"
             << ":";
        cin >> empId;
        fflush(stdin);
        cout << "Enter employee's name"
             << ":";
        getline(cin, empName);
        cout << "Enter employee's qualification"
             << ":";
        getline(cin, qualification);
        cout << "Enter employee's experience(in years)"
             << ":";
        cin >> experience;
        fflush(stdin);
        cout << "Enter employee's contact number"
             << ":";
        cin >> contactNumber;
        fflush(stdin);

        expSum = expSum + experience;
    }

    void putData()
    {
        cout << endl;
        for (int i = 0; i < 40; i++)
        {
            cout << "-";
        }
        cout << endl
             << endl
             << left << setw(20) << "Employee ID"
             << ": " << setw(4) << empId << endl
             << left << setw(20) << "Employee name"
             << ": " << empName << endl
             << left << setw(20) << "Qualification"
             << ": " << qualification << endl
             << left << setw(20) << "Experience"
             << ": " << experience << "years" << endl
             << left << setw(20) << "Contact Number"
             << ": " << setw(10) << contactNumber << endl;
    }

    bool searchId(int temp_id)
    {
        if (temp_id == empId)
            return true;

        else
            return false;
    }
};

class TeachingEmployee : Employee
{
private:
    string designation;
    string specialization;
    string payScale;

public:
    void gettempdata()
    {
        Employee :: getData();
        cout << "Enter employee's designation"
             << ":";
        getline(cin, designation);
        cout << "Enter employee's specialization"
             << ":";
        getline(cin, specialization);
        cout << "Enter employee's Pay Scale"
             << ":";
        getline(cin, payScale);
    }

    void putTempdata()
    {
        Employee :: putData();
        cout << left << setw(20) << "Designation"
             << ": " << setw(4) << designation << endl
             << left << setw(20) << "Specialization"
             << ": " << specialization << endl
             << left << setw(20) << "Pay Scale"
             << ": " << payScale << endl<<endl;
        fflush(stdin);
        for (int i = 0; i < 40; i++)
        {
            cout << "-";
        }
    }

    bool searchtemp(int temp_id)
    {
        return Employee :: searchId(temp_id);
    }
};

class NonTeachingEmployee : Employee
{
private:
    int salary;

public:
    void getntempdata()
    {
        Employee :: getData();
        cout << "Enter employee's salary"
             << ":";
        cin >> salary;
        fflush(stdin);
    }
    void putntempdata()
    {
        Employee :: putData();
        cout << left << setw(20) << "Employee's salary"
             << ": " << setw(4) << salary << endl;
             for (int i = 0; i < 40; i++)
        {
            cout << "-";
        }
    }

    bool searchntemp(int temp_id)
    {
        return Employee :: searchId(temp_id);
    }
};

float Employee::Average_Experience = 0;
int Employee::counter = 0;
float Employee::expSum = 0;

int main()
{
    int no_temp, no_ntemp, i,j, temp_id;

    cout << "Enter the number of Teaching employees:";
    cin >> no_temp;
    fflush(stdin);
    class TeachingEmployee temp[no_temp];
    for (i = 0; i < no_temp; i++)
    {
        temp[i].gettempdata();
    }

    cout << "\nEnter the number of Non-Teaching employees:";
    cin >> no_ntemp;
    fflush(stdin);
    class NonTeachingEmployee ntemp[no_ntemp];
    for (i = 0; i < no_ntemp; i++)
    {
        ntemp[i].getntempdata();
    }

    char controller;
    do
    {
        system("cls");
        cout << "Enter the option of your preference:\n"
             << "1.Display employee details by id.\n"
             << "2.Display average Experience of employees\n";
        int menuNumber;
        cin >> menuNumber;
        switch (menuNumber)
        {
        case 1:

            system("cls");
            cout << "\nEnter employeeId:";
            cin >> temp_id;
            fflush(stdin);
            for (i = 0; i < no_temp; i++)
            {
                if (temp[i].searchtemp(temp_id))
                {
                    temp[i].putTempdata();
                    break;
                }
            }
            for (j=0;j<no_ntemp;j++)
            {
                if (ntemp[j].searchntemp(temp_id))
                {
                    ntemp[j].putntempdata();
                    break;
                }
            }
            if (i == no_temp && j == no_ntemp)
            {
                cout << endl;
                for (i = 0; i < 40; i++)
                    cout << "*";

                cout << "\nERROR: ENTERED EMPLOYEE ID DOES NOT EXIST\n";

                for (i = 0; i < 40; i++)
                    cout << "*";
            }

            break;

        case 2:
            Employee::avgExp();

        default:
            break;
        }
        cout << "\n\nPress Y to get another employee detail , press N to exit:";
        cin >> controller;
        fflush(stdin);
    } while (controller == 'Y' || controller == 'y');
}
