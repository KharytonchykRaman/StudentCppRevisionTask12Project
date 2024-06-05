#pragma once
#include <climits>
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void print(string msg, bool result) {
	cout << msg << (result ? RIGHT : WRONG) << endl;
}

void testingTask01() {
	bool result = task01(21, 28) == 7
		&& task01(28, 21) == 7
		&& task01(18, 12) == 6
		&& task01(24, 36) == 12
		&& task01(24, 12) == 12
		&& task01(5, 13) == 1
		&& task01(13, 5) == 1
		&& task01(270, 192) == 6
		&& task01(192, 270) == 6
		&& task01(36, 36) == 36
		&& task01(36, 28) == 4
		&& task01(1, 1) == 1
		&& task01(-1, 1) == 0
		&& task01(1, -1) == 0
		&& task01(-1, -1) == 0
		&& task01(1, 0) == 0
		&& task01(0, 1) == 0
		&& task01(0, 0) == 0;

	print("Task 01 [The Greatest Common Divisor I]", result);
}

void testingTask02() {
	bool result = task02(21, 28) == 84
		&& task02(28, 21) == 84
		&& task02(18, 12) == 36
		&& task02(24, 36) == 72
		&& task02(24, 12) == 24
		&& task02(5, 13) == 65
		&& task02(13, 5) == 65
		&& task02(270, 192) == 8640
		&& task02(192, 270) == 8640
		&& task02(36, 36) == 36
		&& task02(36, 28) == 252
		&& task02(1, 1) == 1
		&& task02(-1, 1) == 0
		&& task02(1, -1) == 0
		&& task02(-1, -1) == 0
		&& task02(1, 0) == 0
		&& task02(0, 1) == 0
		&& task02(0, 0) == 0;

	print("Task 02 [Least Common Multiple I]", result);
}

void testingTask03() {
	bool result = task03(21, 28, 63) == 7
		&& task03(28, 21, 63) == 7
		&& task03(21, 63, 28) == 7
		&& task03(63, 21, 28) == 7
		&& task03(28, 63, 21) == 7
		&& task03(63, 28, 21) == 7
		&& task03(18, 12, 24) == 6
		&& task03(24, 48, 36) == 12
		&& task03(5, 13, 3) == 1
		&& task03(270, 192, 72) == 6
		&& task03(36, 36, 36) == 36
		&& task03(7, 7, 7) == 7
		&& task03(1, 1, 1) == 1
		&& task03(-1, 1, 1) == 0
		&& task03(1, -1, 1) == 0
		&& task03(1, 1, -1) == 0
		&& task03(-1, -1, -1) == 0
		&& task03(1, 1, 0) == 0
		&& task03(1, 0, 1) == 0
		&& task03(0, 1, 1) == 0
		&& task03(0, 0, 0) == 0;

	print("Task 03 [The Greatest Common Divisor II]", result);
}

void testingTask04() {
	bool result = task04(21, 28, 42) == 84
		&& task04(28, 21, 42) == 84
		&& task04(28, 42, 21) == 84
		&& task04(42, 28, 21) == 84
		&& task04(21, 42, 28) == 84
		&& task04(42, 21, 28) == 84
		&& task04(18, 12, 36) == 36
		&& task04(24, 36, 12) == 72
		&& task04(24, 12, 12) == 24
		&& task04(12, 24, 12) == 24
		&& task04(12, 12, 24) == 24
		&& task04(5, 13, 2) == 130
		&& task04(270, 192, 2160) == 8640
		&& task04(192, 2160, 270) == 8640
		&& task04(2160, 270, 192) == 8640
		&& task04(36, 36, 36) == 36
		&& task04(7, 7, 7) == 7
		&& task04(1, 1, 1) == 1
		&& task04(-1, 1, 1) == 0
		&& task04(1, -1, 1) == 0
		&& task04(1, 1, -1) == 0
		&& task04(-1, -1, -1) == 0
		&& task04(1, 0, 0) == 0
		&& task04(0, 1, 0) == 0
		&& task04(0, 0, 1) == 0
		&& task04(0, 0, 0) == 0;

	cout << "Task 04 [Least Common Multiple II]" << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {
	bool result = !taskX(12345)
		&& !taskX(54321)
		&& !taskX(0)
		&& taskX(11111)
		&& taskX(121)
		&& !taskX(-12345)
		&& !taskX(-54321)
		&& taskX(11345)
		&& taskX(54311)
		&& taskX(12145)
		&& taskX(54121)
		&& taskX(-11345)
		&& taskX(-54311)
		&& !taskX(1234567890)
		&& !taskX(-1234567890)
		&& taskX(900)
		&& taskX(-900)
		&& taskX(-11111)
		&& taskX(999999)
		&& taskX(-999999)
		&& taskX(1000000)
		&& taskX(-1000000);

	cout << "Task X [Non-Unique Number Digits] " << (result ? RIGHT : WRONG) << endl;
}