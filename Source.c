#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int CurrentFloor;
	int input;

} myStruct;

void GetOut(int _f);

int main()
{
	// allocates the struct to the heap
	myStruct * p_ptr = (myStruct *)malloc(sizeof(myStruct));

	myStruct f = { .CurrentFloor = 1, .input = 0 };

	int input = 0;
	int i = 1;
	while (i == 1)
	{
		printf("You are currently on floor '%d'. Where would you like to go?\n1. up\n2. down\n3. Leave Elevator\n", f.CurrentFloor);
		scanf_s("%d", &f.input);
		if (f.input == 1 && f.CurrentFloor < 5)
		{
			f.CurrentFloor++;
		}
		else if (f.input == 2 && f.CurrentFloor > 1)
		{
			f.CurrentFloor--;
		}
		else if (f.input == 3)
		{
			GetOut(f.CurrentFloor);
			i = 0;
		}
		else
		{
			printf("The elevator cannot go this way.\n");
		}
	}

	// frees the struct from the heap
	free(p_ptr);

	system("PAUSE");
	return 0;
}

void GetOut(int _f)
{
	printf("Welcome to floor %d\n", _f);

}