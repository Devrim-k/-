#include <iostream>

using namespace std;

int getsum(int arr[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

float average(int arr[], int size) {
	int sum = getsum(arr, size);
	return ((float)sum) / ((float)size);
}

int main()
{
	int arr[5];
	cout << "���� 5���� �Է��ϼ��� : " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	float total = getsum(arr, 5);
	float avg = average(arr, 5);

	cout << "���� : " << total << endl;
	cout << "��� : " << avg << endl;

	return 0;
}