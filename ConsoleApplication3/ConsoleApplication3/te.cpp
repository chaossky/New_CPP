#include<vector>
#include<iostream>

std::vector<std::pair<std::string, int> > values;
for (std::vector<std::pair<std::string, int> >::const_iterator i = values.begin(); i != values.end(); ++i)
{
	std::pair<std::string, int> const & t = *i;
	// do something
}