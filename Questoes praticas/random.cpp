#include <random>
#include <iostream>

int main()
{
	auto const seed = std::random_device()();
	std::mt19937 rg(seed);
	std::uniform_real_distribution<> dist(0,1);

	for(auto i = 0; i < 100; i++)	std::cout << dist(rg) << std::endl;

	return 0;
}
