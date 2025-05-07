#include <iostream>
using std::cout;
using std::endl;

int BinarySearch(int data[], int size, int low, int high, int key){
	if (low <= high){
		int mid = low + (high - low) / 2;
		if (data[mid] == key)
			return mid;
		if (key < data[mid])
			return BinarySearch(data, size, low, mid - 1, key);
		else
			return BinarySearch(data, size, mid + 1, high, key);

	}else
		return -1;
	
}
int main(){
	int heights[] = {10, 12, 25, 26, 37, 41, 55}; // 7
	int weights[] = {12, 41, 55, 70, 71, 73, 80, 91, 100, 121}; // 10

	for (int i = 0; i<10; i++)
		cout << weights[i] << "Found at " << BinarySearch(heights, 7, 0, 6, weights[i])<< endl;
	for (int i = 0; i<7; i++)
		cout << heights[i] << "Found at " << BinarySearch(weights, 10, 0, 9, heights[i])<<endl;
	return 0;
}

/*
0 1 2 3 4 5 6 7
  |       |

low + (high - low) / 2 =
1 + (5 - 1) / 2 = 1 + 2 = 3 

0 1 2 3 4 5 6 7
|     *       |

0 + (7 - 0) / 2 = 3

*/
