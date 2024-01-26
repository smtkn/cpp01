#include "Harl.hpp"

int main()
{
	Harl obj;

	obj.complain("");
	obj.complain("DEBUG");
	obj.complain("INFO");
	obj.complain("WARNING");
	obj.complain("ERROR");

	return 0;
}