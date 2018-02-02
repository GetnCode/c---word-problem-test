#include <iostream>
#include <string>

using namespace std;

int main(int agrc, char* argv[]) 
{
	for (int i = 1; i <= 365; i++)
	{
		if (i % 50 != 0) 
		{
			string output = ((i % 3) == 0) ? to_string(i) + " jack swimming" : to_string(i) + " john swimming";
			cout << output << endl;
		}

		else 
		{
			cout << i << " both are swimming" << endl;
		}
	}

	cin.get();
}