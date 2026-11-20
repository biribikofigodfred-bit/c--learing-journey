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
    first_name = first;
}

 std:: string getlastname(){
    return last_name;
 }
void setlastname(std:: string last){
    last_name = last;
}

void display(){
    std:: cout<<"First name: "<<first_name<<std:: endl;
    std:: cout<<"last name: "<<last_name<<std:: endl;
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
    p1.setfirstname("kwame");
    p1.setlastname("biribi");
    std::cout<< p1.getfirstname() <<" " <<p1.getlastname()<<std::endl;


    
    
    
    
    
    
    
    return 0;
}