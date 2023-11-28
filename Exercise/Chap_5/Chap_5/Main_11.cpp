#include "../../../Depends/std_lib_facilities.h"

int main()
try {

	vector<int> fib = { 1, 1 };

	for (int i = fib.size() - 1;; i++) {
		double sum = fib[i - 1];
		double temp = fib[i];
		if (sum + temp > INT32_MAX) {
			break;
		}

		sum += temp;
		fib.push_back(narrow_cast<int>(sum));
	}

	cout << "fib "; 
	for (int i = 0; i < fib.size(); i++) {
		cout << "(" << i << "): " << fib[i] << '\n';
	}

	keep_window_open();
	return 0;
}
catch (...) {
	cerr << "Unknown error\n";
	keep_window_open();
	return 1;
}