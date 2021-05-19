#include"phone.h"

void searchByName()
{   int i;
	char searchname[100];
	printf(">>Enter a name to search:");
	scanf("%s",searchname);
	for ( i = 0; i < 4; i++) {
		if (searchname == book[i].Username) {
			printf("%s\t%s", book[i].Username, book[i].PhoneNum);
			break;
		}
		else {
			printf("Oops! %s is not in the PhoneBook.",searchname);
			break;
		}
	}
}
