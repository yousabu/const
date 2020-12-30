#include<iostream>
using namespace std;

class Course {
    private:
        string name;
    public:
        Course(string name){
            setName(name);
        }
        void setName(string name);
        string getName(){
            return name;
        }
        friend void printCourseName(Course c);
};
// member function
void Course::setName(string name){
    this->name=name;
}
//not member but friend function to use private attribute in class  
void printCourseName(Course c){
    cout<<c.name<<endl;
}
int main(){
   Course c("C++ OOP"); 
    printCourseName(c);
    
    
    }