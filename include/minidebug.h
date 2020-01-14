#ifndef _CPPBENC 
#define _CPPBENC 
#include <iostream> /* cout */
#include <stdio.h>  /* string formatting */
 
/* Parse absolute file path returned by __FILE__ into a file name such as MyFile.cpp */ 
const char* __GetCurrentFileName( 
	const char* Absolute_Path 
); 
 
/* More practical way of getting the current source file line */ 
unsigned int __GetCurrentLine( 
	unsigned int Line 
); 
 
/* Output to the default STD_OUTPUT handle console in this format: [MyFile.cpp @ MyLine]: Message */ 
void __DebugCout( 
	const char* Message, 
	const char* FileName, 
	unsigned int Line 
); 
 
/* Macros can already provide the information we need for 2 parameters, so let's use that */

#ifndef DebugCout(Message) 
#define DebugCout(Message) __DebugCout(Message, __GetCurrentFileName(__FILE__), __GetCurrentLine(__LINE__))
#endif

#endif /* _CPPBENC */ 