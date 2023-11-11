#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 1 2023
	Evan Holloway Nov 11 2023

	Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route.
	Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between two neighboring cities.
	Find and print the mean distance between two neighboring cities.
*/

int main() {
	cout << "Please enter the distances between cities you would like evaluated (terminated by '|'): \n";
	double val;
	vector<double> distances;

	while (cin >> val)
		distances.push_back(val);

	if (distances.size() == 0)
		return 0;

	double sum = 0.0;
	for (int i = 0; i < distances.size(); i++)
		sum += distances[i];
	cout << "The sum of all entered distances is: " << sum << '\n';

	sort(distances);
	cout << "The smallest distance entered was: " << distances[0] << '\n';
	cout << "The largest distance entered was: " << distances[distances.size()];
	cout << "The mean distance is : " << sum / distances.size();

	keep_window_open();
	return 0;
}