#include <iostream>
#include <conio.h>

int main()
{
	char ch; //or 'int ch;' (it doesn't really matter)

	//the program pauses here until a key is pressed
	ch = _getch();

	if(ch == 'a')
		std::cout << "You pressed a!" << std::endl;
	else
		std::cout << "You did not press a!" << std::endl;

	return 0;
}
