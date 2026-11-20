#include <iostream>
#include <string>

class person{
    private:
     std:: string first_name;
    std:: string last_name;
    
    public:
    person(std:: string first, std:: string last){
        this-> first_name = first;
        this-> last_name = last;
    }
  
    std:: string getfirstname(){
    return first_name;
}
void setfirstname(std:: string first){
    this->first_name = first;
}

 std:: string getlastname(){
    return last_name;
 }
void setlastname(std:: string last){
    this->last_name = last;
}

void display(){
    std:: cout<<"First name: "<<first_name<<std:: endl;
    std:: cout<<"last name: "<<last_name<<std:: endl;
 }

 

};

class employee : public person{
std:: string department;
public:
employee(std:: string first, std:: string last , std:: string department): person(first, last){
    this->department = department;
}
 
std:: string getdepartment(){
    return department;
}
void setdepartment(std:: string department){
    this-> department = department;
}




};

int main(){

    person p1("Godfred", "Kofi");
    p1.display();
    
    std:: cout<< p1.getlastname()<<std::endl;
    p1.setfirstname("optimistic");
    p1.setlastname("boy");

    std:: cout<<p1.getfirstname()<<std::endl;
    std:: cout<<p1.getlastname()<<std::endl;

    std:: cout<<p1.getfirstname() << " " << p1.getlastname()<<std::endl;

    employee e("first", "last", "sales");
    e.display();
   


    
    
    
    
    
    
    
    return 0;
}