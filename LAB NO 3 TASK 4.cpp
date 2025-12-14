///L1F24BSCS0069 - MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
class PointerDemo {
private:
    int* ptr;  

public:
    // Take input from user and allocate memory
    void UserInput() {
        ptr = new int;   //creating dynmaic memoery of one as only one int vvalue
        cout << "Enter an integer value: ";
        cin >> *ptr; //takking the value
    }
    //Return square of stored value
    int squareValue() {
        return (*ptr) * (*ptr);
    }
    //Display stored value and its square
    void Display() {
            cout << "Stored value: " << *ptr << endl;
            cout << "Square of value: " << squareValue() << endl;
    }
    // Delete allocated memory
    void Deallocate() {
        delete ptr;  //the memory is deleted 
        cout << "Memory deleted. Pointer is now dangling." << endl;
    }
    //Demonstrate dangling pointer issue
    void ShowDanglingEffect() {
        cout << "Attempting to access deleted memory (undefined behavior demonstration):" << endl;
        cout << "Pointer address after delete: " << ptr << endl;
        cout << "(Accessing *ptr now would be dangerous and may crash the program)" << endl;
    }
    // Fix dangling pointer
    void FixDangling() {
        ptr = NULL; //assiging the pointer to null 
        cout << "Pointer reset to NULL successfully." << endl;
    }
    // Reallocate memory and assign a new value
    void Reallocate() {
        ptr = new int;   // allocating new dynamic memeory 
        cout << "Enter a new integer value: ";
        cin >> *ptr; //taking a new value
        cout << "New value stored successfully: " << *ptr << endl;
    }
};

int main() {
    PointerDemo obj;
    cout << "Allocating memory and taking the input value." << endl;
    obj.UserInput();
    cout << endl << "Displaying the value and its square." << endl;
    obj.Display();
    cout << endl << "Deallocating memory to create dangling pointer." << endl;
    obj.Deallocate();
    cout << endl << "Demonstrate dangling pointer issue." << endl;
    obj.ShowDanglingEffect();
    cout << endl << "Fixing the dangling pointer by setting it to NULL." << endl;
    obj.FixDangling();
    cout << endl << "Reallocatin ght ememory to new input" << endl;
    obj.Reallocate();
    obj.Display();
    return 0;
}

