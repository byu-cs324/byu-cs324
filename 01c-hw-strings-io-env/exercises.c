#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <fcntl.h>

#define BUFSIZE 30

void memprint(char *, char *, int);

void part1();
void part2();
void part3();

int main(int argc, char *argv[]) {
	part1();
	part2();
	part3();
}

void memprint(char *s, char *fmt, int len) {
	// iterate through each byte/character of s, and print each out with
	// the format specified with fmt
	int i;
	char fmt_with_space[8];

	sprintf(fmt_with_space, "%s ", fmt);
	for (i = 0; i < len; i++) {
		printf(fmt_with_space, s[i]);
	}
	printf("\n");
}

void part1() {
	printf("===== Part 1 =====\n");

	// Note: STDOUT_FILENO is defined in /usr/include/unistd.h:
	//
	// #define	STDOUT_FILENO	1

	char s1a[] = { 104, 101, 108, 108, 111, 10 };
	write(STDOUT_FILENO, s1a, 6);

	char s1b[] = { 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x0a };
	write(STDOUT_FILENO, s1b, 6);

	char s1c[] = { 'h', 'e', 'l', 'l', 'o', '\n' };
	write(STDOUT_FILENO, s1c, 6);

	char s2[] = { 0xe5, 0x8f, 0xb0, 0xe7, 0x81, 0xa3, 0x0a };
	write(STDOUT_FILENO, s2, 7);

	char s3[] = { 0xf0, 0x9f, 0x98, 0x82, 0x0a };
	write(STDOUT_FILENO, s3, 5);

	int s1a_len = sizeof(s1a);

	printf("===== Questions 1 through 4 =====\n");

	printf("===== Questions 5 through 7 =====\n");

}

void part2(char *filename) {
	printf("===== Question 8 =====\n");

	printf("===== Question 9 =====\n");
	char buf[BUFSIZE];

	printf("===== Question 10 =====\n");

	fprintf(stderr, "===== Questions 11 through 14 (stderr) =====\n");
	fprintf(stdout, "===== Questions 11 through 14 (stdout) =====\n");

	printf("===== Question 15 =====\n");
	int fd1, fd2;

	printf("===== Questions 16 and 17 =====\n");
	size_t numread = 0;
	size_t totread = 0;

	printf("===== Question 18 through 21 =====\n");

	printf("===== Question 22 through 27 =====\n");

	printf("===== Question 22 through 28 =====\n");

	printf("===== Question 29 =====\n");

	printf("===== Question 30 =====\n");
	int ret = 0;

	printf("===== Question 31 =====\n");

	printf("===== Question 32 =====\n");

	printf("===== Question 33 =====\n");

	printf("===== Questions 34 through 35 =====\n");

	printf("===== Question 36 =====\n");
}

void part3() {
	printf("===== Questions 37 through 38 =====\n");
	char *s1;

}
