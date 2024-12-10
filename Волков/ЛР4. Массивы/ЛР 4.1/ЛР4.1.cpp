#include <iostream>

int main() {
	int n;
	double arr[100];

	std::cout << "Write the number of elements in the massive less then 100" << std::endl;
	std::cin >> n;

	if(n > 100) {
		std::cout << "error" << std::endl;
		return 1;
	}

	std::cout << "Write " << n << " elements of the massive : " << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	double minElement = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < minElement) {
			minElement = arr[i];
		}
	}

	int numk;
	std::cout << "Write num of K-element" << std::endl;
	std::cin >> numk;

	double result = arr[numk - 1] * minElement;
	std::cout << result;

}