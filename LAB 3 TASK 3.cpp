///L1F24BSCS0069 - MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
class ArrayOperations {
private:
    int* arr;
    int size;
public:
    // Function to take user input
    void UserInput() {
        cout << "Enter the size of the array"<<endl;
        cin >> size; //asking the user for the size of the array for dynamic size grow
        arr = new int[size]; // dynamically alocating the size of the array at run time
        cout << "Enter the values of the array" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i]; //taking input of the array from the user
        }
    }
    // Function to calculate sum of array elements
    int calculateSum() {
        int sum = 0; //variable to store the sum
        for (int i = 0; i < size; i++) {
            sum += arr[i]; //accessing all the enteries and adding them to get to the final ans
        }
        return sum; //returning the value
    }
    // Function to calculate average of array elements
    double calculateAverage() {
        return (double)calculateSum() / size; //logic for the avegerage of the entries of the array
    }
    // Function to display array elements
    void Display() {
        cout << "Array elements are: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
    // Destructor to release dynamically allocated memory
   void FreeMemory() {
        delete[] arr;
        arr = NULL;  // pointing to a null so not dangling pointer
    }
};

int main() {
    ArrayOperations obj;
    obj.UserInput();
    obj.Display();
    int sum = obj.calculateSum();
    double avg = obj.calculateAverage();
    cout << "Sum of array elements = " << sum << endl;
    cout << "Average of array elements = " << avg << endl;
    obj.FreeMemory(); 
    return 0;
}

