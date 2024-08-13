#include <iostream>
#include <vector>
using namespace std;

// Employee class definition
class Employee {
private:
    int id;
    string name;
    string position;
    double salary;
    double benefits = 0;
    double deduction = 0;
    double hoursWorked = 0;

public:
    // Constructor to initialize Employee object
    Employee(int id, string name, string position, double salary, double benefits = 0, double deduction = 0, double hoursWorked = 0) {
        this->id = id;
        this->name = name;
        this->position = position;
        this->salary = salary;
        this->benefits = benefits;
        this->deduction = deduction;
        this->hoursWorked = hoursWorked;
    }

    // Setter methods
    void setBenefits(double health, double retirement) {
        benefits = health + retirement;
    }

    void setDeductions(double tax, double insurance) {
        deduction = tax + insurance;
    }

    void addWorkHours(double hours) {
        hoursWorked += hours;
    }

    // Getter methods
    double getGrossSalary() {
        return salary + benefits;
    }

    double getNetSalary() {
        return getGrossSalary() - deduction; // corrected recursion bug
    }

    void printEmployeeDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Position: " << position << endl;
        cout << "Gross Salary: " << getGrossSalary() << endl;
        cout << "Net Salary: " << getNetSalary() << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
    }

    int getId() {
        return id;
    }
};

// SalaryCalculator class for calculating salary
class SalaryCalculator {
public:
    double calculateGrossSalary(Employee &employee) {
        return employee.getGrossSalary();
    }

    double calculateNetSalary(Employee &employee) {
        return employee.getNetSalary();
    }
};

// UserInterface class for managing user interactions
class UserInterface {
public:
    void displayMenu() {
        cout << "\n-----Employee Management System-----\n" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Update Employee Details" << endl;
        cout << "3. Delete Employee" << endl;
        cout << "4. Calculate Salary" << endl;
        cout << "5. Generate Report" << endl;
        cout << "6. Exit\n" << endl;
    }

    int getInput() {
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }

    void displayOutput(string &output) {
        cout << output << endl;
    }
};

// PayrollSystem class for managing employees
class PayrollSystem {
private:
    vector<Employee> employees;

public:
    // Method to add a new employee
    void addEmployee() {
        int id;
        string name, position;
        double salary;

        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); // to clear the input buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Position: ";
        getline(cin, position);
        cout << "Enter Employee Salary: ";
        cin >> salary;

        employees.push_back(Employee(id, name, position, salary));
    }

    // Method to update employee details
    void updateEmployee() {
        int id;
        cout << "Enter the Employee ID to update: ";
        cin >> id;

        for (auto &emp : employees) {
            if (emp.getId() == id) {
                double health, retirement, tax, insurance;
                cout << "Enter Health benefits: ";
                cin >> health;
                cout << "Enter Retirement benefits: ";
                cin >> retirement;
                cout << "Enter Tax deduction: ";
                cin >> tax;
                cout << "Enter Insurance deduction: ";
                cin >> insurance;

                emp.setBenefits(health, retirement);
                emp.setDeductions(tax, insurance);

                cout << "Employee details updated successfully!" << endl;
                return;
            }
        }
        cout << "Employee not found!" << endl;
    }

    // Method to delete an employee
    void deleteEmployee() {
        int id;
        cout << "Enter the Employee ID to delete: ";
        cin >> id;

        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if (it->getId() == id) {
                employees.erase(it);
                cout << "Employee deleted successfully!" << endl;
                return;
            }
        }
        cout << "Employee not found!" << endl;
    }

    // Method to calculate salary of an employee
    void calculateSalary() {
        int id;
        cout << "Enter employee ID to calculate salary: ";
        cin >> id;

        for (auto &emp : employees) {
            if (emp.getId() == id) {
                SalaryCalculator sc;
                double grossSalary = sc.calculateGrossSalary(emp);
                double netSalary = sc.calculateNetSalary(emp);
                cout << "Gross Salary: " << grossSalary << endl;
                cout << "Net Salary: " << netSalary << endl;
                return;
            }
        }
        cout << "Employee not found!" << endl;
    }

    // Method to generate a report of all employees
    void generateReport() {
        for (auto &emp : employees) {
            emp.printEmployeeDetails();
            cout << "-----------------------\n";
        }
    }
};

// Main function to run the Employee Management System
int main() {
    UserInterface ui;
    PayrollSystem ps;

    while (true) {
        ui.displayMenu();
        int choice = ui.getInput();

        switch (choice) {
            case 1:
                ps.addEmployee();
                break;
            case 2:
                ps.updateEmployee();
                break;
            case 3:
                ps.deleteEmployee();
                break;
            case 4:
                ps.calculateSalary();
                break;
            case 5:
                ps.generateReport();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    }

    return 0;
}
