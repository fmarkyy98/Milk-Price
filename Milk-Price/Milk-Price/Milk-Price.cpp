#include <iostream>
#include <fstream>

using namespace std;

int A[101];

int main()
{
	int N, P, Q;

	ifstream myfile;
	myfile.open("../TextFile1.txt");
	myfile >> N >> P >> Q;
	for (int i = 0; i < N; ++i)
	{
		myfile >> A[i];
	}
	myfile.close();

	int Count = 0;

	for (int i = 0; i < N; ++i)
	{
		if (P <= A[i] && A[i] <= Q)
		{
			++Count;
		}
	}

	cout << Count << endl;
	return 0;
}
