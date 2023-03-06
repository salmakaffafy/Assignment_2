
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int linear_search(int array[], int num, int y) 
{

		 for (int j = 0; j < num; j++)
		 {
		 	if (array[j] == y)
		  	return j;
		 }
	return -1;
}

int main(int argc, char* argv [])
{
    const int num_elements=argc-2;
    int arr[num_elements];
    int search_result;
	for (int i = 2; i <argc; i++) arr[i-2] = atoi(argv[i]);

	  search_result= linear_search(arr, num_elements, atoi(argv[1]));
	  (search_result == -1)
	  ? printf(1,"The element you are searching for is not found.")
	  : printf(1,"The element is found at index. %d", search_result);
 exit();
}

