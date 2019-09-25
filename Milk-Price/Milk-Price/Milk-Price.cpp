#include <iostream>

using namespace std;

int A[101];

int main()
{
	int N, P, Q;
	cin >> N >> P >> Q;
	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}

	int Count = 0;

	for (int i = 0; i < N; i++)
	{
		if (P <= A[i] && A[i] <= Q)
		{
			++Count;
		}
	}

	cout << Count;
	return 0;
}
