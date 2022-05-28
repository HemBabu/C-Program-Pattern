#include <iostream>
using namespace std;
 
class CGS {
public:
	int m;
	int cm;

		CGS(){
		}
		CGS(int m,int cm){
			this->m=m;
			this->cm=cm;
		}
   	void display(){
		cout<<"Distance in CGS= "<<m <<" meters ,"<<cm<<" cm "<<endl;
	}
};

class FPS{
	int feet;
	int inch;
public:
	FPS(){
	}
	FPS(CGS c){
		int x=c.cm+c.m*100; //2.54 cm =1 inch
		x=x/2.54; //convert into inch as integer value
		
		feet=x/12;
		inch=x%12;
	}
	void display(){
		cout<<"Distance in FPS= "<<feet <<" feets ,"<<inch<<" inch "<<endl;
	}
};

int main() {
	
  CGS d1(15,70);
  FPS d2=d1;
d1.display();
d2.display();

   return 0;
}
