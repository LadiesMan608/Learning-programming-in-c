/*------Multidimensional Arrays-----

general form of a multidimensional array declaration:
--)type name[size1][size2]...[sizeN];

--For example, here's a basic one for you to look at - int foo[1][2][3];
--or maybe this one -char vowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}
};



----------Two-dimensional Arrays-----------

--The simplest form of multidimensional array is the two-dimensional array.
--To declare a two-dimensional integer array of size [ x ][ y ], you would write something like this − type arrayName [x][y];
--[ x ] number of rows and [ y ] number of columns
-- you really don't have to put in a [ x ] value really, because if you did something like this -
char vowels[][5] = {
    {'A', 'E', 'I', 'O', 'U'},
    {'a', 'e', 'i', 'o', 'u'}
};

--------Initializing Two-Dimensional Arrays------------
--Multidimensional arrays may be used by specifying bracketed[] values for each row.
 Below is an array with 3 rows and each row has 4 columns. To make it easier, you can forget the 3 and keep it blank, it'll still work.
int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 
};


----------Accessing Two-Dimensional Array Elements----------


--An element in a two-dimensional array is accessed by using the subscripts, i.e., row index and column index of the array.
 For example − int val = a[2][3];
 --The above statement will take the 4th element from the 3rd row of the array.

------------Exercise----------------


--Let us try to find out the average marks of a group of five students for two subjects, Mathematics and Physics. To do this, we use a two-dimensional array called grades. The marks corresponding to Mathematics would be stored in the first row (grades[0]), whereas those corresponding to Physics would be stored in the second row (grades[1]). Complete the following steps so that you can execute this program.

  --  Declare grades as a two-dimensional array of integers
  --  Complete the for loops by specifying their terminating conditions
   -- Compute the average marks obtained in each subject

	#include <stdio.h>

	int main() {
        int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		 TODO: complete the for loop with appropriate terminating conditions 
		for (i = 0; i < 2; i++) {
			average = 0;
			for (j = 0; j < 5 ; j++) {
				average += grades[i][j] / 5.0;
			}

			 TODO: compute the average marks for subject i 
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}


























*/