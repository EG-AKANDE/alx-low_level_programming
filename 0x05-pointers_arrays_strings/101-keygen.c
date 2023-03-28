#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH_MIN 6
#define PASSWORD_LENGTH_MAX 12

int main(void)

	{
	
	char password[PASSWORD_LENGTH_MAX + 1] = {0};
	int password_length = PASSWORD_LENGTH_MIN + rand() % (PASSWORD_LENGTH_MAX - PASSWORD_LENGTH_MIN + 1);
	int i;
	int has_lowercase = 0;
	int has_uppercase = 0;
	int has_digit = 0;

	srand(time(NULL));

	for (i = 0; i < password_length; i++)
		{

		int random_char = rand() % 62;
		char c;

		if (random_char < 26)
			{

			c = 'a' + random_char;
			has_lowercase = 1;
		}
		
		else if (random_char < 52)
			{
			c = 'A' + random_char - 26;
			has_uppercase = 1;
		}
		
		else
			{
			c = '0' + random_char - 52;
			has_digit = 1;
		}

		password[i] = c;
	}

	if (!has_lowercase) {
		int index = rand() % password_length;
		password[index] = 'a' + rand() % 26;
	}

	if (!has_uppercase) {
		int index = rand() % password_length;
		password[index] = 'A' + rand() % 26;
	}

	if (!has_digit) {
		int index = rand() % password_length;
		password[index] = '0' + rand() % 10;
	}

	printf("%s\n", password);

	return 0;
}
