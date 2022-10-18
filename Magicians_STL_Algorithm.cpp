
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

int main()
{
	int arr[] = {10, 20, 5, 23 ,42 , 15};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Vector is: ";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";

	sort(vect.begin(), vect.end());


	cout << "\nVector after sorting is: ";
	for (int i=0; i<n; i++)
	cout << vect[i] << " ";


	sort(vect.begin(),vect.end(), greater<int>());

	cout << "\nVector after sorting in Descending order is: ";
	for (int i=0; i<n; i++)
	cout << vect[i] << " ";


	reverse(vect.begin(), vect.end());

	cout << "\nVector after reversing is: ";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";

	cout << "\nMaximum element of vector is: ";
	cout << *max_element(vect.begin(), vect.end());

	cout << "\nMinimum element of vector is: ";
	cout << *min_element(vect.begin(), vect.end());

	cout << "\nThe summation of vector elements is: ";
	cout << accumulate(vect.begin(), vect.end(), 0);

	return 0;
}
