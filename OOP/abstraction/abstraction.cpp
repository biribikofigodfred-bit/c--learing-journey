#include  <iostream>
using namespace std;

class promotionemployee  {
   virtual void askforpromotion()=0;
}; //abstraction.

class employee :promotionemployee{
   private:
    string name;
     string company;
     int age;
   public:
      void setname(string name){
        this-> name = name;
      }
       string getname(){
          return name;
          }
      void setcompany(string company){
          this-> company = company;
      }
    string getcompany(){
          return company;
          }
      void setage(int age){
          if(age >= 18)
         this-> age = age;
      }
    int getage(){
          return age;
      }

    
       employee(string name , string company , int age){
          this-> name = name;
          this-> company = company;
          this-> age = age;
      }
     void introduceyourself(){
          std:: cout<<"name - "<<name <<std::endl;
          cout<<"company - "<< company <<endl;
          cout<<"Age - "<< age <<endl;
      }
       virtual void askforpromotion() {
        if(age>30)
        cout<<name<<" congratulations. got promoted"<<endl;
        else
        cout<<name<<" sorry, no promotion"<<endl;
       }

  };

int main()
{ 
    employee employee1 = employee("Godfred","optimistic company limited", 22 );
    employee1.introduceyourself();

    employee employee2("john", "Amazon" , 24);
    employee2.introduceyourself();
    
    employee1.setage(100);
    cout<<employee1.getname()<<" is " << employee1.getage() <<" years old"<<endl;

employee employee3("godfred", "apple", 25);
employee3.introduceyourself();

employee3.setname("Kwame");
employee3.setage(40);
cout<<employee3.getname()<<endl;
employee3.askforpromotion();
employee2.askforpromotion();


    
   return 0;
}