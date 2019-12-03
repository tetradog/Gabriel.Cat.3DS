#ifndef DATETIME_H
#define DATETIME_H


class DateTime
{
    public:
        DateTime();
       // DateTime(long ticks);
        virtual ~DateTime();

       const int Year;
       const int Month;
       const int Day;
       const int Hour;
       const int Minute;
       const int Second;

       const int DayOfWeek;
       const bool IsLeapYear;

       const string ShortDate;
       const string LongDate;
       const string WeekDayName;
       const string MonthName;
       const string LongStringDate;

    protected:

    private:
};

#endif // DATETIME_H
