#include <iostream>
#include <string>
using namespace std;

int main()
{
	string *ptr;
	string *ptr1;
	string str1, str2;
	cout << "enter string value 1 of 6 characters"<<endl;
	getline(cin, str1);
	cout << "enter string value 2 of 6 characers " << endl;
	getline(cin, str2);
	cout << "change your string 1 using pointers" << endl;
	string old = str1;
	
	
	ptr = &str1;
	cin >> *ptr;
	cout << "change your string 2 using pointers" << endl;
	string old1 = str2;
	ptr1 = &str2;
	cin >> *ptr1;

	cout << "the address of your string 1 is " << ptr << endl;
	cout << "the old string is " << old << endl;
	cout << "the new sting is " << *ptr << endl;
	cout << endl;
	cout << "the address of string 2 is " << ptr1 << endl;
	cout << "the old string 2 is " << old1 << endl;
	cout << "the new string 2 is " << *ptr1 << endl;
}
