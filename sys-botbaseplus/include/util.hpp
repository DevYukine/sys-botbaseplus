#pragma once

#include <switch.h>

#define MAX_LINE_LENGTH 344 * 32 * 2

namespace BotBasePlus
{
	namespace Util
	{
		extern u64 mainLoopSleepTime;
		extern bool debugResultCodes;

		int setupServerSocket();
		u64 parseStringToInt(char *arg);
		u8 *parseStringToByteBuffer(char *arg, u64 *size);
		HidControllerKeys parseStringToButton(char *arg);
		Result capsscCaptureForDebug(void *buffer, size_t buffer_size, u64 *size); //big thanks to Behemoth from the Reswitched Discord!

	} // namespace Util

} // namespace BotBasePlus
