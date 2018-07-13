//https://www.codingunit.com/c-tutorial-how-to-use-time-and-date-in-c

/*
Note: the windows.h include, 
this program will not work on other platforms. 
Another thing we need to warn you about is
that the program doesn¡¯t respond to daylight saving time issues.
*/
#include <windows.h>
#include <time.h>
#include <stdio.h>

//typedef struct _SYSTEMTIME {
//	WORD wYear;
//	WORD wMonth;
//	WORD wDayOfWeek;
//	WORD wDay;
//	WORD wHour;
//	WORD wMinute;
//	WORD wSecond;
//	WORD wMilliseconds;
//} SYSTEMTIME;

void wait(int sec)
{
	clock_t end_wait;
	end_wait = clock() + sec * CLK_TCK;

	while (clock() < end_wait) {}
}

int main(void) {
	/*
	The function time() returns the type 
	time_t. The time that is returned represents 
	the number of seconds elapsed since 00:00 hours, Jan 1, 1970 UTC.
	It¡¯s also called UNIX EPOCH time.
	*/
	time_t sec;
	sec = time(NULL);
	printf ("Number of years since January 1, 1970 is %ld \n", sec/3600/24/365);

	/*
	Take a look at the following example that 
	uses GetSystemTime function to get the UTC time:
	*/
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);

	printf("Year:%d\nMonth:%d\nDate:%d\nHour:%d\nMin:%d\nSecond:% d\n"
		, str_t.wYear, str_t.wMonth, str_t.wDay
		, str_t.wHour, str_t.wMinute, str_t.wSecond);


	/*
	The Unix EPOCH time is not readable for humans.
	To get a human-readable version of the current local time you can use the ctime() function.
	The function returns a C string containing the date and time information.
	*/
	printf(ctime(&sec));


	/*
	The function difftime() is a very useful function, 
	because it can be used to measure the performance time of a certain part of code.
	*/
	time_t start, end;
	volatile long unsigned counter;
	start = time(NULL);
	for (counter = 0; counter < 500000000; counter++)
		; /* Do nothing, just loop */
	end = time(NULL);
	printf("The loop used %f seconds.\n", difftime(end, start));


	/*
	Number of clock ticks

	It is also possible to use clock ticks elapsed 
	since the start of the program in your own programs by
	using the function clock().
	For instance you can build a wait function or use it in your frame per second (FPS) function.

	Take a look at the following wait example:
	*/
	printf("Start the Wait!\n");
	wait(3);	/* Wait for 5 seconds */
	printf("End Wait!\n");
	return 0;


}