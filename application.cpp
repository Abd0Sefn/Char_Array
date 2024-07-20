#include<iostream>
using namespace std;
int main(){
    string names[10];
    int ages[10];
    int salaries[10];
    char genders[10];
    string name;
    int added = 0;int choice;
    while(true){
        cout << "Enter your choice:" << endl;
        cout << "1) Add new employee" << endl;
        cout << "2) Print all employees" << endl;
        cout << "3) Delete by age" << endl;
        cout << "4) Update salary by name" << endl;
        cin >> choice;
        if(choice < 1 || choice > 4){
            cout << "Invalid choice. Try again";
            continue;
        }
        if(choice == 1){ 
            cout << "Enter name: ";         cin >> names[added] ;
            cout << "Enter age: ";          cin >> ages[added] ;
            cout << "Enter salary: ";       cin >> salaries[added];
            cout << "Enter gender (M/F): "; cin >> genders[added];
            ++added;
        }
        else if(choice == 2){
            cout << "*********************************\n";
            for(int i = 0; i < added; ++i){
                if(ages[i] != -1){
                    cout << names[i] << " " << ages[i] << " " << salaries[i] << " " << genders[i] << endl;
                }
            }
        }
        else if(choice == 3){
            int min, max;
            cout << "Enter start and end age\n";
            cin >> min >> max;
            for(int i = 0; i < added; ++i){
                if(ages[i] > min && ages[i] < max)
                    ages[i] = -1;
            }
        }
        else{
            int salary; 
            cout << "Enter the name and salary ";
            cin >> name >> salary;
            bool is_found = false;
            for(int i = 0; i < added ; ++i){
                if(names[i] == name && ages[i] != -1){
                    is_found = true;
                    salaries[i] = salary;
                    break;
                }
            }
            if(!is_found)
            cout << "No employee with this name!";
        }
    cout << "\n";
    }
    return 0;
}