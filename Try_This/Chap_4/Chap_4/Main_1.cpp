#include "../../../Depends/std_lib_facilities.h"

int main()
{
	const double yen_per_dollar = 149.92;
	const double kron_per_dollar = 11.19;
	const double pound_per_dollar = .83;

	cout << "Please enter the amount and currency you would like converted to USD (yen: y, kroner: k, pound: p):\n";
	int money;
	char curr;
	cin >> money >> curr;

	if (curr == 'y')
		cout << money << " yen is " << money * yen_per_dollar << " usd.\n";
	else if (curr == 'k')
		cout << money << " kroner is " << money * kron_per_dollar << " usd.\n";
	else if (curr == 'p')
		cout << money << " pounds is " << money * pound_per_dollar << " usd.\n";
	else
		cout << "Please enter a valid currency label (y, k, p).]n";

	keep_window_open();
	return 0;
}