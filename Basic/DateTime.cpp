#include "DateTime.h"
#include <time.h>

const char* const months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

const char* const weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const u16 daysAtStartOfMonthLUT[12] =
{
	0   % 7, //january    31
	31  % 7, //february   28+1(leap year)
	59  % 7, //march      31
	90  % 7, //april      30
	120 % 7, //may        31
	151 % 7, //june       30
	181 % 7, //july       31
	212 % 7, //august     31
	243 % 7, //september  30
	273 % 7, //october    31
	304 % 7, //november   30
	334 % 7  //december   31
};

DateTime::DateTime()
{
    //ctor
    time_t unixTime = time(NULL);
    struct tm* timeStruct = gmtime((const time_t *)&unixTime);
    int day,year;
    this.Year=timeStruct->tm_year+1900;
    this.Month=timeStruct->tm_month;
    this.Day=timeStruct->tm_mday;
    this.Hour=timeStruct->tm_hour;
    this.Minute=timeStruct->tm_min;
    this.Second=timeStruct->tm_sec;

    this.IsLeapYear=(this.Year%4) == 0 && !((this.Year%100) == 0 && (this.Year%400) != 0);

    day=this.Day;
    year=this.Year;

    day += 2*(3-((year/100)%4));
	year %= 100;
	day += year + (year/4);
	day += daysAtStartOfMonthLUT[this.Month] - (isLeapYear(year) && (this.Month <= 1));

	this.DayOfWeek= day % 7;

	this.ShortDate=this.Hour+":"+this.Minute+":"+this.Second;
	this.LongDate=this.ShortDate+" "+this.Day+"-"+this.Month+"-"+this.Year;
	this.DayOfWeekName=weekDays[this.DayOfWeek];
	this.MonthName=months[this.Month];
	this.LongStringDate=this.ShortDate+" "+this.DayOfWeekName+", "+this.Day+" of "+this.MonthName+" of "+this.Year;
}
}
/*DateTime::DateTime(long ticks)
{
    //ctor

}
*/
DateTime::~DateTime()
{
    //dtor
}
