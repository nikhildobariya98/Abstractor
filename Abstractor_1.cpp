#include<iostream>
using namespace std;

class  Demonstrate{
	
	public:
		
	 virtual void fun() = 0;
	
};

class Demonstrate_2 : public Demonstrate{
	
	  public:
	  	void fun(){
	  		
	  		cout<<" Demonstrate_2 class function "<<endl;
		  }
};

main(){
	
	 Demonstrate_2 obj;
	 
	 obj.fun();
}
