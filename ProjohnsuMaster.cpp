#include <stdio.h>
#include <conio.h>

int i = 0;

void johnsu(int n);

int main() {

	johnsu(100);


	return 0;
}
void johnsu(int n) {
	printf("%d\n", (i++)+1);
	if (i == n);
	else johnsu(n);
}