#pragma once

void DisableCDCheck();

constexpr BYTE CDFuncBlock[] = {
	0x81, 0xEC, 0x08, 0x04,
	0x00, 0x00, 0xA1 };

constexpr BYTE CDBlockTest[] = {
	0x33, 0x84, 0x24, 0x08,
	0x04, 0x00, 0x00, 0x53 };

