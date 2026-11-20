#include <iostream>
#include <string>

class person{
private:
   std:: string first_name;
   std:: string last_name;

  public: 
    person(std:: string f, std::string l){
    first_name = f;
    last_name = l;

   }

void display(){
    std:: cout<<"first name: "<< first_name <<" "<< "last name: " <<last_name <<std:: endl;
   }

};

int main(){
   person p1("Godfred", "Biribi");
   person p2("Esther", "Dua");
   person p3("Optimistic", "Guy");
   person p4("scarlet", "Queen");

   p1.display();
   p2.display();
   p3.display();
   p4.display();


   
   
   
   
   
   
  
    return 0;
}