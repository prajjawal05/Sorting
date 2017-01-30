//Sorting an array of strings..

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>

void radix_sort(char **,int,int);

int main()
{
	char **input;
	char ch=' ';
	int n,k,i,j;
	srand(time(NULL));
	scanf("%d",&n);
	scanf("%d",&k);
	input = (char **)malloc(n*sizeof(char *));
	for(i=0;i<n;i++)
	{
		input[i]=(char *)malloc((k+1)*sizeof(char));
		for(j=0;j<k;j++)
			input[i][j]=(rand()%95)+32;
		input[i][k]='\0';
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",input[i]);
	}
	printf("------------------------------------------------------------------------------");
	radix_sort(input,n,k);
	for(i=0;i<n;i++)
	{
		printf("%s\n",input[i]);
	}

	return 0;
}

void radix_sort(char **input,int n,int k)
{
	/* The function sorts the array input using radix sort
	   Write the two versions of the radix sort here, one after another.
	   To execute one of the version just comment out the other version.
	 */
	int exp;
	for(exp = k-1;exp >= 0;exp--)
		countswap(input,n,exp,k);
	//	countSort(input,n,exp,k);
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.

countswap(char **input,int n , int exp, int k)
{
	int count[100];
        int i;
        for(i = 0; i < 100; i++) {
                count[i] = 0;
        }
        for(i = 0; i < n; i++) {
                //printf("%d ", input[i][id] - 32); 
                count[input[i][exp] - 32]++;
        }
                printf("\n");
        for(i = 1; i < 100; i++) {
                count[i] += count[i-1];
                //printf("%d ", count[i]);      
        }
                //printf("\n");
        char temp1[k+1];
        for(i = n-1; i >= 0;) {
                int temp = count[input[i][exp] - 32] - 1;
                if(temp == i) {
                        count[input[i][exp] - 32]--;
                        i--;
                } else {
                        strcpy(temp1, input[temp]);
                        strcpy(input[temp], input[i]);
                        strcpy(input[i], temp1);
                }
        }

}
void countSort(char **input, int n, int exp,int k)
{
	char output[n][k+1]; // output array
	char x[k];
	int i, count[100],j;
	for(i=0;i<100;i++)
		count[i] = 0;
	for(i=0;i<n;i++)
	{
		count[input[i][exp]-32]++;
		//	printf("%c   ",input[i][exp]);
	}
	//printf("\n");
	for(i=1;i<100;i++)
		count[i] += count[i - 1];
	for(i=n-1;i>=0;i--)
	{
		//output[count[input[i][exp] -32]] = arr[i];
		for(j=0;j<k;j++)
		{
			output[count[input[i][exp] -32]-1][j] =input[i][j];
			//		printf("%c",input[i][j]);
		}
		//printf("\n");
		count[input[i][exp] -32]--;
	}
	//int j;
	for(i = n-1; i >= 0; i--)
	{
		for(j=0;j<k;j++)
		{
			input[i][j] = output[i][j];
		}	
	}
}
