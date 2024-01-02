#include <bits/stdc++.h> 
using namespace std; 

class EmployeeManagementSystem{ 
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_joinning_date; //TODO : How to store the date(int/string/other) suggest. 
    string emp_designation;
    string emp_leaving_date = "None" ;//TODO : How to store the date(int/string/other) suggest.[Also need to update the default value]
    double emp_total_exp;
    string emp_skills;
}; 