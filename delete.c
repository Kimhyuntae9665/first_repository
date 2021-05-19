#include"phone.h"

void deleteByName()
{
	char Delename[100];
	printf("Enter a name to delete:");
	scanf("%s",Delename);
	for (int i = 0; i < 50; i++) {
		if (Delename == book[i].Username) {
			book[i].Username == " ";
		}

	}
	printf("%s is deleted", Delename);
}
