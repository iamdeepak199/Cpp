#include <iostream>
using namespace std;

class car{
  private:
  
     int x,y,sum;
  
  public:
     
        int set_data(int a,int b){
          x=a;
          y=b;
          sum=a+b;
        }
        void set_data();
        
         void get_data(){
              cout <<"Sum of two numbers is : "<<sum<<endl;
              }
  
};


void car :: set_data(){ //Outside class
  cout<<"Outside Class Method Using Scope Resolution operator :: "<<endl;
}
int main() 
{
  
  car c1;
  c1.set_data(6,9);
  c1.set_data();
  c1.get_data();
 
}