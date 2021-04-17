int is_leap_year(int y1)
{
	if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
	{

		return 1;
	}
	return 0;

}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}

	return 0;
}
