#include <iostream>



int main()
{

	//Multiple comparisons of conditional statements

	//int x;
	//std::cin >> x;

	// x > =5;
	// x < =6;
	/*if (x >= 3)
	{
		if (x <= 6)
		{

		}
	}*/

	/*if (x >= 3 && x <= 6)
	{
		std::cout << "it's true";
	}*/

	//you can use to multiple conditionals in the query.
	if ((x >= 3 && x <= 6) || (x >= 7 && x <= 12))
	{
		std::cout << "it's true";
	}

	// && AND Operator is return true When both conditions are true
	// || OR a parts of the two conditions are true, return true




	////loop statement 초기값; 조건식; 증감식;
	//for (initializationStatement; testExpression; updateStatement)
	//{
	//	//statements inside the body of loop
	//}
	int max;
	std::cin >> max;
	for (int i = 0; i < max; i++)
	{
		if (i == 5)
		{
			std::cout << "Fifth\n";
		}
		std::cout << "Hello\n";
	}

	//figure out if(contional statements)

}