#include <iostream>
#include <map>
using namespace std;

int main() 
{
   map<int, string> students;
   int choice, id;
   string name;

   do {
       cout << "\n1. Add Student\n2. View Students\n3. Update Student\n4. Delete Student\n5. Exit\n";
       cout << "Enter choice: ";
       cin >> choice;

       if (choice == 1) 
       {
           // Add Student
           cout << "Enter Student ID: ";
           cin >> id;
           cout << "Enter Name: ";
           cin >> ws;
           getline(cin, name);
           students.insert({id, name});  // Insert 
           cout << "Student added successfully!\n";
       }

       else if (choice == 2) 
       {
           // View Students
           if (students.empty()) 
           {
               cout << "No students found!\n";
           } else 
           {
               cout << "Student List:\n";
               for (auto entry : students) 
               {
                   cout << "ID: " << entry.first << ", Name: " << entry.second << endl;
               }
           }
       }
       else if (choice == 3) 
       {
           // Update Student
           cout << "Enter Student ID to update: ";
           cin >> id;
           if (students.find(id) != students.end()) 
           {
               cout << "Enter new Name: ";
               cin >> ws;
               getline(cin, name);
               students.at(id) = name; // Update
               cout << "Student updated successfully!\n";
           } else 
           {
               cout << "Student ID not found!\n";
           }
       }
       else if (choice == 4) 
       {
           // Delete Student
           cout << "Enter Student ID to delete: ";
           cin >> id;
           if (students.erase(id)) 
           {
               cout << "Student deleted successfully!\n";
           } else 
           {
               cout << "Student ID not found!\n";
           }
       }
       else if (choice == 5) 
       {
           cout << "Exiting...\n";
       }
       else 
       {
           cout << "Invalid choice! Try again.\n";
       }

   } while (choice != 5);
   return 0;
}


