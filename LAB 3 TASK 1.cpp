/////L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
class NumberSwapper{
	private:
		int Num1,Num2; //creating variable name for storing of the data
	public:
		//////////setters
		void setNum1(int value){
			Num1=value; //assigning the value to NUm1
		}
		void setNum2(int val){
			Num2=val; //assigning the value to NUm2
		}
		////////////getters
		int getNum1(){
			return Num1; //retriving value from num1
		}
		int getNum2(){
			return Num2; //retriving value from num1
		}
		/////////////swapping of numbers
		void swapNumbers(int a, int b){ //function to swap numbers by using a third variable
			int temp=a;
			a=b;
			b=temp;
			cout<<"The value of num1 after swapping is = "<<a<<" and the value of num2 after swapping is = "<<b;
		} 
		//display
		void displayNUmbers(int c,int d){
			cout<<"The orignial value of num1 is = "<<c<<" and the original value of num2 is = "<<d<<endl;
		}
};

int main()
{
	NumberSwapper obj; //making an object 
	int number1,number2,n1,n2; //creating variables so can store the initial numbers and also the getter ones 
	cout<<"Enter the first number"<<endl;
	cin>>number1; //taking first number form the user
	obj.setNum1(number1); //initilizing the number with the num1 variable in the class
	cout<<"Enter the second number"<<endl;
	cin>>number2; //taking first number form the user
	obj.setNum2(number2); //initilizing the number with the num1 variable in the class
	n1=obj.getNum1(); //getting the numbers so can be used to pass as argument in display and swap function
	n2=obj.getNum2(); //getting the numbers so can be used to pass as argument in display and swap function
	obj.displayNUmbers(n1,n2);
	obj.swapNumbers(n1,n2);
	return 0;
}
