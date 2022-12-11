#include <iostream>
#include <map>
#include <algorithm>

int main()
{
	int n;
    std::cin>>n;
    std::map<std::string, int> map;
    for(int i=0;i<n;i++)
    {
    	std::string s;
    	std::cin>>s;
    	map[s]++;
	}
	

	auto pr = std::max_element(map.begin(), map.end(), [](const auto &x, const auto &y) {
					return x.second < y.second;
				});

	std::cout << pr->first << std::endl;

	return 0;
}
