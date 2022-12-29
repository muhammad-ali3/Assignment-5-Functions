//Name: Muhammad Ali BS Data Science 1st-Semester
#include <iostream>
using namespace std;

// Function with no argument and no return value
void checkEvenOdd1() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num % 2 == 0) {
		cout << num << " is even." << endl;
	} else {
		cout << num << " is odd." << endl;
	}
}

// Function with no argument but return value
bool checkEvenOdd2() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num % 2 == 0;
}

// Function with argument but no return value
void checkEvenOdd3(int num) {
	if (num % 2 == 0) {
		cout << num << " is even." << endl;
	} else {
		cout << num << " is odd." << endl;
	}
}

// Function with argument and return value
bool checkEvenOdd4(int num) {
	return num % 2 == 0;
}

int main() {
	int num;
	// Call function with no argument and no return value
	cout<<"This is step 1."<<endl<< "Done by calling a function with no argument and no return value"<<endl;
	checkEvenOdd1();

	// Call function with no argument but return value
	cout<<"This is step 2 "<<endl<< "Done by calling a function with no argument but return value"<<endl;
	bool isEven = checkEvenOdd2();
	if (isEven) {
		cout << "The number is even." << endl;
	} else {
		cout << "The number is odd." << endl;
	}

	// Call function with argument but no return value
	cout<<"This is step 3"<<endl<< "Done by calling a function with argument but no return value"<<endl;
	cout<<"Enter a Number: ";
	cin>> num;
	checkEvenOdd3(num);

	// Call function with argument and return value
	cout<<"This is step 4"<<endl<< "Done by calling a function with argument and return value"<<endl;
	cout<<"Enter a Number: ";
	cin>> num;
	if (checkEvenOdd4(num)) {
		cout << "The number is even." << endl;
	} else {
		cout << "The number is odd." << endl;
	}

	return 0;
}
