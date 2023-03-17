using namespace std;
#include <iostream>
#include <Windows.h>

int main()
{
	/*
	//1) max & min of array
	const int n = 10;
	int arr[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {

		int randn = rand() % 10000 + 1;
		arr[i] = randn;
		if (i < 9) {
			cout << arr[i] << "; ";
		}
		else {
			cout << arr[i] << "." << endl;
		}
		Sleep(150);

	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << "MAX is " << max << endl;
	cout << "MIN is " << min << endl;
	
	
	// 2) the firm income
	const int n = 12;
	int arr[n];
	int k = 1;
	for (int i = 0; i < n; i++) {
		cout << "Input the " << k << " month income ($)\t";
		cin >> arr[i];
		cout << endl;
		k++;
	}
	cout << "_________________________________________________\n";
	int max = 0;
	int min = INT_MAX;
	while (true) {
		int f, s, maxm = 0, minm = 0;
		cout << "Enter the range between months you wont to explore\n";
		cout << "input the first number of month\t"; cin >> f;
		cout << "input the second number of month  "; cin >> s;
		cout << "_________________________________________________\n";
		for (int i = f; i <= s; i++) {
			cout << i << " month\n";
			cout << arr[i-1] << "$ income\n\n";
		}
		for (int i = f; i <= s; i++) {       // max and min
			if (max < arr[i-1]) {
				max = arr[i-1];
				maxm = i;
			}
			if (min > arr[i-1]) {
				min = arr[i-1];
				minm = i;
			}
		}
		cout << "MAX is the " << maxm << " month:  " << max << "$" << endl;
		cout << "MIN is the " << minm << " month:  " << min << "$" << endl;
		cout << endl;
		int end;
		cout << "Whant to explore again? (1- yes; 2 - no)\n"; cin >> end;
		if (end == 2) {
			cout << "Goodbye\n";
			return 0;
		}
		else if (end == 1) { cout << endl; }
		
	}
	
	
	const int n = 6;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cout << "Input " << i + 1 << " number.... ";
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	int unsi = 0;
	long long mdm = 1;
	long pd = 1;
	int sum = 0;
	int maxk = 0, mink = 0, k;
	int a = 0;
	int funs, luns;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			unsi += arr[i]; // negative sum
			if (a == 0) {   // first negative numb
				funs = i;
				a = 1;
			}
			luns = i;    // last negative numb
		}
		if (max < arr[i]) { // max
			max = arr[i];
			maxk = i;
		}
		if (min > arr[i]) {    // min
			min = arr[i];
			mink = i;
		}
		if (arr[i] % 2 == 0) { //  добуток парних номерів
			pd *= (long)arr[i];
		}
	}
	if (maxk < mink) {
		k = mink;			
		mink = maxk;
		maxk = k;
	}
	for (int i = mink; i <= maxk; i++) {
		mdm *= (long long)arr[i];
	}
	for (int i = funs; i <= luns; i++) {
		sum += arr[i];
	}
	cout << "Sum of negative numbers is " << unsi << endl;
	cout << "Sum between of first and last negative numbers is " << sum << endl;
	cout << "MIN is " << min << endl;
	cout << "MAX is " << max << endl;
	cout << "Multiplying of min to max numbers is " << mdm << endl;
	cout << "Multiplying of even numbers is  " << pd << endl;
	

// classwork lesson 11 (20 slide)

	const int n = 8;
	int arr[n];
	int i;
	for (i = 0; i < n; i++) {
		if (i == 0) {
			cout << "Input 8 numbers\n";
		}
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	
	for ( i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];	
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << endl;
	cout << "MAX is " << max << endl;
	cout << "MIN is " << min << endl;
	for (i = 0; i < n; i++) {
		if (arr[i] == min) {
			arr[i] = max;
		}
		else if (arr[i] == max) {
			arr[i] = min;
		}
		
		cout << arr[i] << " ";
	}
	*/
// classwork (21 slide)
	const int n = 8;
	int arr[n];
	int arr2[n / 2];
	int a = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
	if (i == 0) {
		cout << "Input 8 numbers\n";
	}
	cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < n/2; i++) {
		arr2[i] = arr[i];
	}
	cout << endl;
	for (int i = n - 1; i >= n / 2; i--) {
		k = arr[i];
		
		while (a < (n / 2)) {
			arr2[a] += k;
			a++;
			break;
		}
	}
	cout << endl;
	for (int i = 0; i < n / 2; i++) {
		cout << arr2[i] << " ";
	}
}
