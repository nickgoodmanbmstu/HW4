#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
int main(void) {


	int N;

	int i, j;

	int c = 0;

	int d = 0;

	int v = 0;

	int t = 0;
	printf("Enter the size of your matrix: ");
	scanf("%d", &N);

	int** A = (int**)malloc(N * sizeof(int*));
	for (int i = 0; i < N; i++)
		A[i] = (int*)malloc(N * sizeof(int));

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &A[i][j]);


	for (i = 0; i < N; i++)
	{ 
	
		for (j = 0; j < N; j++) {
				
			
				
			
		
			{
				while (A[i][j] >= 1)
					if (A[i][j] != 0)
						
				{
						
						if (i != j)
							v++;
					

					if (A[i][j] > 1)
					{
						c++;
					}
					if (A[i][i] > 0)
					{
						c++;
					}

					A[i][j]--;
					d++;
				}

			}

		}
		if (v < (N / 2))
			t++;
			v = 0;
	}
	if (t > 0)
		printf("not Hamiltonian\n");
	else if (N < 3)
		printf("not Hamiltonian\n");
	else
		printf("Hamiltonian\n");

	for (int i = 0; i < N; i++) {

		free(A[i]);
	}
	free(A);

	if ((c == 0) && (d == N))

		printf("The graph is a simple cycle");

	else
		printf("The graph is not a simple cycle");
	return 0;
}
