#include <iostream>
using namespace std;
class Employee;

class Staff{
    private:
        string name;
        double salary;
    public:
    Staff(string name, double salary){
        setName(name);
        setSalary(salary);
    }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setSalary(double salary){
            this->salary=salary;
        }
        double getSalary(){
            return salary;
        }
        friend void printTotal(Staff s, Employee e);
};


class Employee{
    private:
        string name;
        double salary;
    public:
    Employee(string name, double salary){
        setName(name);
        setSalary(salary);
    }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setSalary(double salary){
            this->salary=salary;
        }
        double getSalary(){
            return salary;
        }
        friend void printTotal(Staff s, Employee e);
};

void printTotal(Staff s, Employee e){
    cout<<s.salary+e.salary;
}
int main(){
    Staff s("Ali", 2000);
    Employee e("omer",1000);
    printTotal(s,e);
}