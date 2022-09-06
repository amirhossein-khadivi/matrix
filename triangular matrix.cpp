#include<iostream>
using namespace std;
int main()
{
	int A[5][5] = 0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			A[i][j] = 1;
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout << a[i][j];
		}
    }
	return 0;
}
