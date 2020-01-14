#include "minidebug.h"

class testing
{
public:
	static void Shout(
		const char* Message
	)
	{
		DebugCout(Message);
	}
};