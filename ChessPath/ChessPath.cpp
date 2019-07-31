#include <iostream>

int ChessPath(int row, int col)
{
	if (row == 1 || col == 1)
	{
		return 1;
	}

	return ChessPath(row - 1, col) + ChessPath(row, col - 1);
}

int main()
{
	int row = 4;
	int col = 6;
	printf("ChessPath(%d, %d) = %d\n", row, col, ChessPath(row, col));
	return 0;
}