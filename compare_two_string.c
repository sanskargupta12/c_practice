// C Program to show how to compare two strings using 
// pointers 
#include <stdbool.h> 
#include <stdio.h> 

// Method to compare two strings using pointer 
bool compare(char* str1, char* str2) 
{ 
	// Iterating through the characters of both the strings 
	while (*str1 == *str2) { 
		if (*str1 == '\0' && *str2 == '\0') 
			return true; 
		str1++; 
		str2++; 
	} 

	return false; 
} 

int main() 
{ 
	// Declare and Initialize two strings 
	char str1[] = "Hello"; 
	char str2[] = "World"; 

	// check if both strings are equal or not 
	if (compare(str1, str2) == 1) 
		printf("%s and %s are Equal", str1, str2); 
	else
		printf("%s and %s are not Equal", str1, str2); 

	return 0; 
}
