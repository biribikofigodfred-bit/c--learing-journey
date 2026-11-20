#include  <iostream>
using namespace std;
class employee{
    private:
    string name;
     string company;
     int age;
   public:
      void setname(string name){
         name = name;
      }
       string getname(){
          return name;
          }
      void setcompany(string company){
          company = company;
      }
    string getcompany(){
          return company;
          }
      void setage(int age){
          if(age >= 18)
          age = age;
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

  };

int main()
{ 
    employee employee1 = employee("Godfred","optimistic company limited", 22 );
    employee1.introduceyourself();

    employee employee2 = employee("john", "Amazon" , 24);
    employee2.introduceyourself();
    employee1.setage(15);
    cout<<employee1.getname()<<" is " << employee1.getage() <<" years old"<<endl;

employee employee3("godfred", "apple", 25);
employee3.introduceyourself();

employee3.setname("kwame");
cout<<employee3.getname()<<endl;

    
   return 0;
}