#include<iostream>
using namespace std;

class Shape {
	protected:
		float dimension;
		
		public:
			void getDimension(){
			cin >> dimension;
        }
        
        virtual float calculateArea() = 0;
        
};

    class Triangle : public Shape {
    	public:
    		float calculateArea(){
    			return (0.5f * dimension * dimension);
    			
			}
	};
	
	 class  Rectangle : public Shape {
	 	private:
	 		float breath;
    	public:
    		float calculateArea(){
    			cout << "Enter the breath of rectangle: ";
    			cin >> breath;
    			return  dimension = dimension * breath;
    	
			}
	};
	
	 class Circle : public Shape {
    	public:
    		float calculateArea(){
    			return 3.14 * dimension * dimension;
    			
			}
	};
	
int main(){
	 
	Triangle triangle;
	Rectangle  rectangle;
	Circle circle;

	

	cout <<"Enter the length of  triangle: ";
	
	triangle.getDimension();
	cout <<"Area of triangle: " << triangle.calculateArea() << endl;
	
	
		cout <<"Enter the length of  rectangle: ";
	
	 rectangle.getDimension();
	cout <<"Area of  rectangle: " <<  rectangle.calculateArea() << endl;
	
	cout << "Enter radius of the circle: ";
	
	circle.getDimension();
	 cout << "Area of circle: "<< circle.calculateArea() << endl;
	
}
