//~ 1.
//~ A B C D ..................Z
//~ a b c d ..................z


//~ 2.input: apple
  //~ output: vowels count : 2
          //~ consonants count : 3
#include<stdio.h>
int main()
{
	int i;
	for(i='A';i<='Z';i++)
	{
		printf("%c ",i);
	}
	printf("\n");
	for(i='a';i<='z';i++)
	{
		printf("%c ",i);
	}
	return 0;
}
