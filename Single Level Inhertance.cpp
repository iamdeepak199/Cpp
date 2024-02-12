#include <iostream>
using namespace std;

class car{
  protected:
  
  string name;
  float speed;
  double mrp;
  string dl;
  
  public:
       
       int set_data(string n,float s,double m,string d);
        void get_data();
};

class sportsCar : public car{
  public:
   int set_data(string n,float s,double m,string d){
          name=n;
          speed=s;
          mrp=m;
          dl=d;
        }
   
  
   void get_data(){
          cout<<"Cars Details: "<<endl;
          cout<<"Car Name : "<<name<<endl;
          cout<<"Car Speed : "<<speed<<endl;
          cout<<"Car MRP : "<<mrp<<endl;
           cout<<"Car DL : "<<dl<<endl;
        }
};
int main() 
{
  
  sportsCar s1;
  s1.set_data("Baleno",150.9,900000,"DL4S2324");
   s1.get_data();
 
}