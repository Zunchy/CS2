#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        3/11/19
// Author:      Zachary Waterbury
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date {
public:
	Date() {};

	void setday(String d) { day = d; };
	void setmonth(String m) { month = m; };
	void setyear(int y) { year = y; };
	String getday() const { return day; };
	String getmonth() const { return month; };
	int getyear() const { return year; };

private:
	String  day, month;
	int     year;
};

////////////////////////////////////////////////////////////
class Time {
public:
	Time() {};

	void sethour(int h) { hour = h; };
	void setminute(int m) { minute = m; };
	void setsecond(int s) { second = s; };
	int gethour() const { return hour; };
	int getminute() const { return minute; };
	int getsecond() const { return second; };
private:
	int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
	LogEntry() {};
	LogEntry(String);
	friend  std::ostream& operator<<(std::ostream&, const LogEntry&);
	String gethost() const { return host; };
	int getbytes() const { return number_of_bytes; };

private:
	String  host;
	Date    date;
	Time    time;
	String  request;
	String  status;
	int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse(std::istream&);
void                    output_all(std::ostream&, const std::vector<LogEntry> &);
void                    by_host(std::ostream&, const std::vector<LogEntry> &);
int                     byte_count(const std::vector<LogEntry>&);

#endif

