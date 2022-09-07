#include<iostream>

using namespace std;

class A{
	
	public:
		
	virtual void fun(){
		
		cout << "fun A class Function "<< endl;

	}
	
	void skill(){
		 
		 cout<<"skill A class Function "<< endl;
	}
};

class B : public A {
	
	public:
		
		void fun(){
			
			cout<<"B class Function "<< endl;
			
		}
		
		void skill(){
			
			cout<<"Skill B class Function "<< endl;
			
		}
};

main(){
	
	B b;
	A *a;
	
	a = &b;
	
	a->fun();
	
}
