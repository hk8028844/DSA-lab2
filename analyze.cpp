#include <iostream>
using namespace std;

void analyze_pointer(int *ptr);

int main(){
	int stackInt = 40;
	analyze_pointer(&stackInt);

	int *heapInt = new int(41);
	analyze_pointer(heapInt);

	system("pause");
	return 0;
}

void analyze_pointer(int *ptr){
	cout << "Pointer address: " << ptr << endl;
	cout << "Value pointed to: " << *ptr << endl;
}