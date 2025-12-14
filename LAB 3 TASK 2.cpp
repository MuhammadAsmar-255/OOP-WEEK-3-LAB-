/////L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
class Area{ //creating class for area.
	private:
		int Lenght; //ceating variables for storing lenght value
		int Widht=5; //ceating variables for storing widht value
	public:
		//////////setters
		void setLenght(int value){
			Lenght=value; //updating the value lenght
		}
		void setWidht(int val){
			Widht=val; //updating the value of widht
		}
		/////////////getters
		int getLenght(){
			return Lenght; //retriving the lenght data.
		}
		int getWidht(){
			return Widht; //retriving the widht data.
		}
		int calArea(int a,int b){ //function for alculating area
			return a*b; //logic for area calculation
		}
};

int main(){
	Area obj; //making an object
	int recLenght,recWidht,a,b,result,result1; //creating variabes for the data storing
	cout<<"Enter the lenght of the reactangle"<<endl;
	cin>>recLenght; //user defined value
	obj.setLenght(recLenght); //updating the value of lenght in the class
	a=obj.getLenght(); //retriving the data for using in the class 
	b=obj.getWidht(); //retriving the data for using in the class
	result1=obj.calArea(a,b); //calculating the area with default value
	cout<<"The ouput of the area with widht equal to five is "<<result1<<endl;
	cout<<"Enter the widht of the reactangle"<<endl;
	cin>>recWidht; //user defined value
	obj.setWidht(recWidht); //updating the value of lenght in the class 
	a=obj.getLenght(); //retriving the data for using in the class
	b=obj.getWidht(); //retriving the data for using in the class
	result=obj.calArea(a,b); //calling the function for calculating area of the retangle
	cout<<"The area of the rectangle is "<<result;
	return 0;
}
