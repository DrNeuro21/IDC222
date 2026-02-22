/*
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> students;
    int n, roll;
    string name;

    cout << "Enter the number of students: ";
    cin >> n;

    cout << "Enter Roll Number and Name:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> roll;
        cin >> ws;              
        getline(cin, name);    

        students.insert({roll, name});
    }

    cout << "\nStudent Records (Sorted by Roll Number):\n";
    for (auto pair : students)
    {
        cout << "Roll No: " << pair.first
             << ", Name: " << pair.second << endl;
    }

    return 0;
}
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> students;
    int n, roll;
    string name;

    cout << "Enter the number of students: ";
    cin >> n;

    cout << "Enter Roll Number and Name:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> roll;
        cin >> ws;             
        getline(cin, name);     
        students.insert({roll, name});
    }

   
    int searchRoll;
    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    auto it = students.find(searchRoll);

    if (it != students.end())
    {
        cout << "Student Found!\n";
        cout << "Roll No: " << it->first
             << ", Name: " << it->second << endl;
    }
    else
    {
        cout << "Student not found.\n";
    }

    return 0;
}
