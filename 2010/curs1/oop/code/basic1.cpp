#include <iostream>
#include <string>

using namespace std;

class Cat {
	string color;
public:
	void Meow() { cout << "Meow! Meow!"; } 
};

int main()
{
	Cat Tom;
	Tom.Meow();
	return 0;
}
