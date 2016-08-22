#include <iostream>

using namespace std;

int getBit1(int a); // function to return the bits which are 1
void checkBleak(int a); // function to print bleak numbers and non-bleak numbers

int main()
{
	// Initialize range to print and check number. DEFINE RANGE BEFORE EXECUTION
	int checknumber = -1;
	int range=-1;

	//PRINT BANNER
	cout << "\t\t*** BLEAK NUMBER CHECKER ***\n\n" << endl;

	// User input number to check for bleak. REMOVE COMENT AND EXECUTE
	// cout << "Enter the number you want to check "<<endl;
	// cin  >> checknumber;
	// checkBleak(checknumber);  


	// Printing a range of bleak numbers
	for (checknumber; checknumber < range; checknumber++)
		checkBleak(checknumber);  





	cout << endl;
	system("PAUSE");
	return 0;
}

int getBit1(int a)
{
	int count=0;

	while (a > 0)
	{
	if(a% 2 == 1)
	count++;

	a /= 2;

	}

	return count;

}

 void checkBleak(int a) {

	int count; // counter variable for storage
	for (int i = 1; i < a; i++)
	{
		count = getBit1(i); //get number of 1's bit in i
					if (count + i == a) // condition check for bleak
		{
						// if true means not a bleak, print number and its formation and return;
			cout << "The number: " << a << " is not a bleak. \tIt is formed/supported by: "<<" bleak("<<i<<") + "<<count<<" ="<<a <<"\n\n";
			return;
		}
	}

	// if nothing matches its a bleak number and print its formation support
	int temp = getBit1(a);
	count = temp+a;
	cout << "The number: " << a << " is an unsupported bleak number."<< "It forms: "<<" bleak("<<a<<") + "<<temp<<" = "<<count <<"\n\n";;

}