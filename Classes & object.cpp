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
        
         void show_data(){
              cout <<"Sum of two numbers is : "<<sum<<endl;
              }
  
};

int main() 
{
  
  car c1;
  c1.set_data(6,9);
  c1.show_data();
 
}