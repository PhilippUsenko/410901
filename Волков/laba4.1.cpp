#include <iostream>

int main() {
	int n;
	double arr[300];

	std::cout << "Write the number of elements in the massive" << '\n';
	std::cin >> n;

	std::cout << "Write " << n << " elements of the massive : " << '\n';
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
	std::cout << "Write num of K-element" << '\n';
	std::cin >> numk;
	
	double result = arr[numk - 1] *minElement;
	std::cout << result;

}
