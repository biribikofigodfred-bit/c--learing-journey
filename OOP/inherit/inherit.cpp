#include  <iostream>
using namespace std;
class promotionemployee{
   virtual void askforpromotion()=0;
};

class employee:promotionemployee{
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

  };

  class developer : public employee{
    public:
       string favprogramminglanguage;
       developer(string name , string company , int age, string favprogramminglanguage):employee(name,company,age){
       this->favprogramminglanguage = favprogramminglanguage;
       }
       void setfavprogramminglanguage(string favprogramminglanguage){
        favprogramminglanguage = favprogramminglanguage;
       }
       string getfavprogramminglanguage(){
        return favprogramminglanguage;
       }
       void fixbug(){
        cout<<name<<" fix bug using "<<favprogramminglanguage<<endl;
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
          subject = subject;
        }
        string getsubject(){
          return subject;
        }

      };

int main()
{ 
//     employee employee1 = employee("Godfred","optimistic company limited", 22 );
//     employee1.introduceyourself();

//     employee employee2("john", "Amazon" , 24);
//     employee2.introduceyourself();
    
//     employee1.setage(100);
//     cout<<employee1.getname()<<" is " << employee1.getage() <<" years old"<<endl;

// employee employee3("godfred", "apple", 25);
// employee3.introduceyourself();

// employee3.setname("Kwame");
// cout<<employee3.getname()<<endl;

 developer  d1("Biribi Godfred", "google", 25 , "c++");
 d1.fixbug();
 cout<<d1.getname()<<endl;
 cout<<d1.getcompany()<<endl;
 cout<<d1.getage()<<endl;
 d1.introduceyourself();

 d1.fixbug();
 d1.askforpromotion();
cout<<d1.getfavprogramminglanguage()<<endl;

teacher t1("philip", "beatrice edu.complex",28,"integrated science");
t1.introduceyourself();
cout<<t1.getcompany()<<endl;
cout<<t1.getage()<<endl;
t1.lessonnote();
t1.askforpromotion();
cout<<t1.getsubject()<<endl;

    
   return 0;
}