#include <iostream>
#include <fstream>

int main(int arg, char **argv)
{
	if(arg == 4)
	{
		std::string file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ifstream ifile(file);
		if(ifile.is_open())
		{
			std::ofstream ofile(file + ".replace");
			std::string str;
			if(ofile.is_open())
			{
				while(std::getline(ifile, str))
				{
					if(str.size())
					{
						size_t pos = str.find(s1);	
						while(pos != std::string::npos)
						{
							str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
							pos = str.find(s1, pos+s2.length());
						}
						ofile << str << std::endl;
					}
				}
			}
			else
				std::cout << "Error : <" << file << ".replace> is not open" << std::endl; 
			if(ofile)
				ofile.close();
		}
		else
			std::cout << "Error : <" << file << "> is not open" << std::endl;
		if(ifile)
			ifile.close();
	}
	else
		std::cout << "Please using <Program Name> <File Name>  <string1> and <string2>" << std::endl;
	return 0;
}