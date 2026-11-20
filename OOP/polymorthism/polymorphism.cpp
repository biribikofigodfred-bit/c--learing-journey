#include  <iostream>
using namespace std;
class promotionemployee{
   virtual void askforpromotion()=0;
};

class employee : public promotionemployee{
   private:
   int age;
    protected:
     string company;
     
     protected:
     string name;
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
      void askforpromotion(){
        if(age>30)
        cout<<name<<" congratulation. got promoted"<<endl;
        else
        cout<<name<<" sorry. no promotion"<<endl;
      }
    virtual void work(){
        cout<<name <<" is checking email, task backlog, performing tasks... "<<endl;
     }
  };

  class developer : public employee{
    public:
       string favprogramminglanguage;
       developer(string name , string company , int age, string favprogramminglanguage):employee(name,company,age){
       this->favprogramminglanguage = favprogramminglanguage;
       }
       void setfavprogramminglanguage(string favprogramminglanguage){
        this->favprogramminglanguage = favprogramminglanguage;
       }
       string getfavprogramminglanguage(){
        return favprogramminglanguage;
       }
       void fixbug(){
        cout<<name<<" fix bug using "<<favprogramminglanguage<<endl;
       }
         void work(){
        cout<<name <<" is writing " << favprogramminglanguage <<" code"<<endl;
     }
  };
      class teacher : public employee{
       public:
        string subject;
        teacher(string name,string company, int age, string subject):employee(name,company,age){
          this->subject = subject;
        }
        void lessonnote(){
          cout<<name <<" is preparing "<<subject <<"lesson notes for "<<company <<"students"<<endl;
        }
        void setsubject(string subject){
          this->subject = subject;
        }
        string getsubject(){
          return subject;
        }
          void work(){
        cout<<name <<" is teaching  " <<subject <<endl;
     }

      };

int main()
{ 
    // The most common use of polymorphism is when a parent class reference is used to refer to a child class object;
    
    
    
    employee employee1("Godfred","optimistic company limited", 22 );
//     employee1.introduceyourself();

     employee employee2("john", "Amazon" , 24);
//     employee2.introduceyourself();
    
//     employee1.setage(100);
//     cout<<employee1.getname()<<" is " << employee1.getage() <<" years old"<<endl;

 employee employee3("godfred", "apple", 25);
// employee3.introduceyourself();

// employee3.setname("Kwame");
// cout<<employee3.getname()<<endl;

 developer  d1("Biribi Godfred", "google", 25 , "c++");
//  d1.fixbug();
//  cout<<d1.getname()<<endl;
//  cout<<d1.getcompany()<<endl;
//  cout<<d1.getage()<<endl;
//  d1.introduceyourself();

//  d1.fixbug();
//  d1.askforpromotion();
// cout<<d1.getfavprogramminglanguage()<<endl;

 teacher t1("philip", "beatrice edu.complex",28,"integrated science");

 employee* e1 = &d1;
 employee* e2 = &t1;

 e1->work();
 e2->work();

    
   return 0;
}