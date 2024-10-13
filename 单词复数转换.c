#include <stdio.h>
#include <string.h>

int main() {
	int a;
	char word[100];
	char s[2] = {"s"};
	char es[3] = {"es"};
	scanf("%s", word);
	a = strlen(word);
	if (word[a - 1] == 's') {
		printf("%s%s", word, es);
	} else if (word[a - 1] == 'x') {
		printf("%s%s", word, es);
	} else if (word[a - 2] == 'c' && word[a - 1] == 'h') {
		printf("%s%s", word, es);
	} else if (word[a - 2] == 's' && word[a - 1] == 'h') {
		printf("%s%s", word, es);
	} else if (word[a - 1] == 'o') {
		printf("%s%s", word, es);
	} else if (word[a - 1] == 'y') {
		word[a - 1] = 'i';
		printf("%s%s", word, es);
	} else {
		printf("%s%s", word, s);
	}

}
