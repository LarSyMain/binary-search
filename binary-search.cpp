//Здесь все работет по принципу супер мега криво, и я хз в чем дело, но пусть все остается как было <3

#include <iostream>

using namespace std;


void binary_search(int list[8], int item) {
	int low = 0;
	int high = sizeof(list) + 10;

	while (low <= high) {
		int mid = (low + high) / 2;
		int guess = list[mid];
		if (guess == item) {
			cout << mid + 1;
		}
		if (guess > item) {
			high = mid - 1;
		}
		if (guess < item) {
			low = mid + 1;
		}
	}
	
}


int main() {
	int arr[] = {1, 3, 5, 6, 9, 17, 20, 100};
	binary_search(arr, 17);
}
