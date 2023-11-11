#include "../../../Depends/std_lib_facilities.h"

int main() {
	vector<string> ban_word = { "fuck",  "dick", "bitch", "hoe" };
	bool bad = false;

	cout << "Please enter whatever you would like to say (terminated by entering ctrl+Z):\n";
	for (string in_text; cin >> in_text;)
	{
		for (string x : ban_word) {
			if (in_text == x) {
				cout << "**** ";
				bad = true;
				break;
			}
		}
		if (bad == true) {
			bad = false;
		}
		else {
			cout << in_text << " ";
		}
	}
	cout << '\n';

	keep_window_open();
	return 0;
}