#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    string first_name;
    string last_name;

    person(string f, string l){
        first_name = f;
        last_name = l;
    }

  void display(){
        cout<<"First Name: "<<first_name <<", Last Name:"<< last_name <<endl;
    }


};


int main(){

person p1("Godfred", "Biribi");
person p2("Esther", "Dua");
person p3("Optimistic", "Guy");
person p4("scarlet", "queen");

p1.display();
p2.display();
p3.display();
p4.display();
  
// abstraction ---- a concept where you make something easy by hiding the complicated stuff
// encapsulation ----- granting access to private data only through controlled public interfaces
// inheritance ---- we can create derived classes that inherit properties from their parent classes
// polymorphism --- we can treat multiple different objects as their base object type















return 0;
}