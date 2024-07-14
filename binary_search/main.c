#include <iostream>


int binary_search(int n1list[8], int answer) {
	int low = 0;
	int high = 7;

	
	while (low <= high) {
		int middle = (low + high) / 2;
		int guess = n1list[middle];

		if (guess == answer) {
			std::cout << "is CORRECT";
			return middle;
		}
		if (guess > answer) {
			std::cout  << "Is HIGHER";
			high = middle -1;
		}else{
			std::cout << "Is LOWER";
			low = middle + 1;
		}
	}

	return 0;

}

int main()
{
	int n1list[8] = {1,3,5,7,9,10,11,12};
	int answer = 11;

	binary_search(n1list, answer);

	return 0;
}
