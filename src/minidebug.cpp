#include "..\include\minidebug.h" 
#include "..\include\minidebugex.h"
#include <iostream>

const char* __GetCurrentFileName( 
	const char* Absolute_Path 
) 
{ 
	return strrchr(Absolute_Path, '\\') ? strrchr(Absolute_Path, '\\') + 1 : Absolute_Path; 
} 
 
unsigned int __GetCurrentLine( 
	unsigned int Line 
) 
{ 
	return Line; 
} 
 
void __DebugCout( 
	const char* Message, 
	const char* FileName,  
	unsigned int Line 
) 
{ 
	printf("[%s @ %i]: %s \n", FileName, Line, Message);
} 
 
int main() 
{ 
	DebugCout("a");

	DebugCout("b");

	testing::Shout("c");

	/* This prevents the executable from nearly instantly closing upon execution, at the cost of very high CPU usage */
	do 
	{
		std::cout << "";
	} while (true);

	return 0; 
} 