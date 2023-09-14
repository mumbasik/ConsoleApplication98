

#include <iostream>
using namespace std;
void summ(int arr[][5]) {
	int max = arr[0][0];
	int min = arr[0][0];
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
				
			}
			else if (max < arr[i][j]) {
				max = arr[i][j];
			}
			
			
			
			

		}
		
		for (int i = 0; i < 2; i++) {


			cout << arr[i][i];

		}
		
	}
	cout << min;
	cout << max;

}
void summ(double ar[][6]) {
	double max = ar[0][5];
	double min = ar[0][5];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (min > ar[i][j]) {
				min = ar[i][j];
			}
			else if (max < ar[i][j]) {
				max = ar[i][j];

			}

		}
		
		for (int i = 0; i < 3; i++) {


			cout << ar[i][i];

		}
	}
	cout << min;
	cout << max;
}
void summ(char arr[][7]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; j++) {
			cout << arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {


		cout << arr[i][i];
	}
}

int main()
{
	
	int ar[2][5] = {
		{4, 5 , 6 ,7 , 8},
		{3, 1 , 2, 9 , 8},
	};
	summ(ar);
	double arr[2][6] = {
		{2.50, 5.70, 2.4 , 1.3, -1.1, 1.2},
		{4.23, 3.67, 3.52, 12.3 , 1.2 , 1.5},
	};
	summ(arr);
	char arrr[2][7] = {
		{'*', ')', '^', '@', '!', '(', '&'},
		{'-', '+', '=', '#', '#', '%', '~'},

	};
	summ(arr);

}

