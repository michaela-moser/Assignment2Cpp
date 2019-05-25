#include <iostream>
using namespace std;


int main()
{
	int rowsInput=0;
	int rowCounter = 1;

	cout << "Enter number of rows:"<<endl;

	cin >> rowsInput;



	for (int i =rowsInput; i >0; i--)

	{ 
		for (int j = 1; j<i; j++)
		{
			cout << ".";
			
		}	
		
		for (int j = 1; j <= rowCounter; j++)
		{
			cout << "*";
		}
		cout << "" << endl;
		
		rowCounter++;

		
	}
	system("PAUSE");
	return 0;
}
