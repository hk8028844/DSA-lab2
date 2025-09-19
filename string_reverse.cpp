#include <iostream>
#include <string>
using namespace std;

int main() {
	string* str = new string;// dynamically allocate string
	cout << "Enter a string: ";
	getline(cin, *str); // store input directly into *str

	int len = str->length();


	for (int i = 0; i < len / 2; i++) {
		swap((*str)[i], (*str)[len - i - 1]);
	}

	cout << "Reversed string: " << *str << endl;
	delete str;// free memory (no [] needed for single object)
	system("pause");
	return 0;
}
