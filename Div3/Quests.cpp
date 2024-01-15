
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	short int t;
	std::cin >> t;

	int sum = 0;
	while (t--)
	{
		int n, k;
		std::cin >> n >> k;

		sum += n;
		if (sum > 200000)
			break;
		std::vector<short int> a;
		std::vector<short int> b;
		int index = n;
		while(index--)
		{
			short int ea;
			std::cin >> ea;
			a.push_back(ea);
		}
		index = n;
		while(index--)
		{
			short int eb;
			std::cin >> eb;
			b.push_back(eb);
		}
		int saveK = k;
		int i = 0;
		int r = a[0];
		while(i < k - 1)
		{
			if (k - n > 0)
			{
				k = n;
			}
			i++;
			if (a[i] < b[i-1])
			{
				r += b[i-1];
			}else
				r += a[i];
			std::cout << "this is i: " << i << "  ";
			std::cout << "this is a[" << i << "] : " << a[i]<< " and b["<< i<< "] = " << b[i-1] <<std::endl;
			std::cout << "this is the result : " << r << std::endl;
		}
		int var = saveK - n;
		while (var > 0)
		{
			auto max = std::max_element(b.begin(), b.begin() + saveK + 1);
			r += *max;
			std::cout << "this is the result : " << r << std::endl;
			var--;
		}

	}

}
