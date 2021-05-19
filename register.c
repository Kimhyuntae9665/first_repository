#include"phone.h"

void registerPhoneData()
{   
	static int cnt = 0;
    int size=0;
	char password[100]={0};
	printf("Ask to type password\n");
	for(size;size<MAX;size++) {
	printf("Password:\n");
	scanf("%s",password);
	if (!strcmp(password,"qwerty1234")){
			printf("New User Name:");
			scanf("%s", book[size].Username);
			printf("PhoneNumber:");
			scanf("%s", book[size].PhoneNum);
			printf("Registered");
			break;
		}

		else {
						
			if (cnt == 0) {
				printf(">>>Not Matched!!!\n");
			
			
			}

			else if(cnt==1){
				printf(">>>Not Matched(twice)\n");
				
			}

			else  {
				printf(">>>Not Matched(3 times)\n\n");
				printf("You are not allowed to access PhoneBook.\n");
				
			}
			cnt++;
			
		

		


	}
	
}






}
