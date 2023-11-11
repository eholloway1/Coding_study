#include "../../../Depends/std_lib_facilities.h"

int main() {
	
	for (int i = 0; i < 122; i++) {
		cout << char('a' + i) << '\t' << i << '\n';
	}

	keep_window_open();
	return 0;
}