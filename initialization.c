//initial
// Initiallization of grid space.
	// n_time represents new or old. 1 is new. 0 is old
#include <stdio.h>
#include "initialization.h"

void initial_array( int n_row, int n_line)
{
	int n_time, i, j, t, k;
	n_time = 3;
	double grid_space [n_row][n_line][n_time];
	t = 1;
	// t = 1 is now, t-1 is past.
	 
	for ( i = 0; i< n_row; ++i )
	{
		for ( j = 0; j < n_line; ++j)
		{
			grid_space [i][j][t-1] = 0;
			grid_space [i][j][t] = 0;
		}
	}
	for (i = 0; i < n_row; ++i)
	{
		grid_space[i][0][t-1] = 1;
		grid_space[i][0][t] = 1;
	}
		
	for (j = 0; j < n_line; ++j)
	{
		grid_space[0][j][t-1] = 1;
		grid_space[0][j][t] = 1;
	}
		
	for ( i = 0; i < n_row; ++i )
	{
		for (j = 0; j < n_line; ++j)
			printf("%lf ", grid_space[i][j][t]);
	printf("\n");
	}
	
	// Jacobi_method
	for (k = 1; k < 3; ++k) 
		{
		for ( i = 1; i < (n_row -1) ; ++i )
		{
			for (j = 1; j < (n_line-1)  ; ++j)
				grid_space [i][j][t] = 0.25*(grid_space [i+1][j][t-1] \
				+ grid_space [i-1][j][t-1]+ grid_space [i][j+1][t-1]+\
				 grid_space [i][j-1][t-1]);
		}
		for ( i = 0; i< n_row ; ++i )
			for (j = 0; j < n_line ; ++j)
				grid_space [i][j][t-1] = grid_space [i][j][t];
		}
		
	printf("\n");
	
	for ( i = 0; i < n_row; ++i )
		{
		for (j = 0; j < n_line; ++j)
			printf("%lf ", grid_space[i][j][t]);
		printf("\n");
		}
	
	// Relaxation_method
	for (k = 1; k < 3; ++k) 
		{
		for ( i = 1; i < (n_row -1) ; ++i )
		{
			for (j = 1; j < (n_line-1)  ; ++j)
				grid_space [i][j][t] = 0.25*(grid_space [i+1][j][t-1] \
				+ grid_space [i-1][j][t]+ grid_space [i][j+1][t-1]+\
				 grid_space [i][j-1][t]);
				grid_space [i][j][t-1] = grid_space [i][j][t];
		}
	
	printf("\n");
	
	}
	for ( i = 0; i < n_row; ++i )
		{
		for (j = 0; j < n_line; ++j)
			printf("%lf ", grid_space[i][j][t]);
		printf("\n");
		}
	
}	
	
