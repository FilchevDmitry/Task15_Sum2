#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a = { 2,7,11,15 };
	int n = 9;
	int one = 0, two = 0;
	for (int i = 0,j=a.size()-1; i < j; )
	{
		if (a[i] + a[j] == n)
		{
			one = a[i];
			two = a[j];
		}
		if (a[i] + a[j] < n)
			i++;
		else
			j--;
	}
	cout << one << " " << two << endl;
}
