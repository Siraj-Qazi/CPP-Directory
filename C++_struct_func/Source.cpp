#include <iostream>

struct oop        
{
	void func(void)     // C++ structs can hold functions, unlike C's structures
	{
		puts(" Life is so awesome xD");
		puts(" Or it has become shaed. :P");
	}
};

void main(void)
{
	oop fun;
	fun.func();
	getchar();
}