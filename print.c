#include"phone.h"


void printAll()
{    int size;
	printf("<<Display all contacts in the PhoneBook>>");
	for ( size = 0; size < 10; size++) {
		printf("\n%s\t%s\n", book[size].Username, book[size].PhoneNum);
	}

	
}
