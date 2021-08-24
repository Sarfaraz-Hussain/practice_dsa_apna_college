#include<iostream>
using namespace std;

float median(int L[], int R[], int n1, int n2)
{
	int i = 0, j = 0;
	int A[n1 + n2];
	int k = 0;
	while (i < n1 and j < n2)
	{
		if (L[i] < R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
		k++;

	}
	while (i < n1)
	{
		A[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		A[k] = R[j];
		j++;
		k++;
	}
	if ((n1 + n2) % 2 == 1)
	{
		int idx = (n1 + n2) / 2;
		return A[idx];
	}
	else
	{
		int idx = (n1 + n2) / 2;
		float ans = (A[idx] + A[idx - 1]) / (float)2;
		return ans;
	}
}


int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int L[n1], R[n2];
	for (int i = 0; i < n1; i++)
		cin >> L[i];
	for (int i = 0; i < n2; i++)
		cin >> R[i];
	cout << median(L, R, n1, n2) << endl;
}