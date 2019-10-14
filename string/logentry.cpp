//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        3/11/19
// Author:      Zachary Waterbury
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES:  the string s is a valid string from the file
// ENSURES: A LogEntry object is properly created from the string
//
LogEntry::LogEntry(String s) {
	
	std::vector<String> vec = s.split(' ');

	if (vec.size() == 10) {

		// Setting Host
		host = vec[0];

		// Setting Date
		String strDate = vec[3].substr(1, 11);
		std::vector<String> dateVec = strDate.split('/');
		date.setday(dateVec[0]);
		date.setmonth(dateVec[1]);
		date.setyear(dateVec[2].toInt());

		// Setting Time
		String strTime = vec[3].substr(13, 20);
		std::vector<String> timeVec = strTime.split(':');
		time.sethour(timeVec[0].toInt());
		time.setminute(timeVec[1].toInt());
		time.setsecond(timeVec[2].toInt());

		// Setting Request
		request = vec[5] + vec[6] + vec[7];
		int idx = request.findstr(0,"HTTP");
		String method = vec[5].substr(1, vec[5].length() - 1);
		String page = request.substr(vec[5].length(),idx - 1);
		String end = request.substr(idx, request.length() - 2);
		request = "\"" + method + " " + page + " " + end + "\"";

		//Setting Status
		status = vec[8];

		//Setting Number Of Bytes
		if (vec[9] == '-')
			number_of_bytes = 0;
		else
			number_of_bytes = vec[9].toInt();

	}
	else {

		host = "";
		date.setday("");
		date.setmonth("");
		date.setyear(0);
		time.sethour(0);
		time.setminute(0);
		time.setsecond(0);
		request = "";
		status = "";
		number_of_bytes = 0;
	
	}


}

////////////////////////////////////////////////////////// 
// REQUIRES:  The input stream is the stream of an open file
// ENSURES: A vector of LogEntry objects is filled with 
//          LogEntry's from the file
//
std::vector<LogEntry> parse(std::istream& in) {

	std::vector<LogEntry> result;

	String s;
	in >> s;

	while (!in.eof()) {

		result.push_back(LogEntry(s));

		in >> s;

	}

	return result;
}

////////////////////////////////////////////////////////////
// REQUIRES:  The input stream is the stream of an open file
// ENSURES: Prints a LogEntry object to the stream
//

std::ostream& operator<<(std::ostream& os, const LogEntry& log) {

	os << "Host: " << log.host << std::endl;

	os << "Day: " << log.date.getday() << std::endl;
	os << "Month: " << log.date.getmonth() << std::endl;
	os << "Year: " << log.date.getyear() << std::endl;

	os << "Hour: " << log.time.gethour() << std::endl;
	os << "Minute: " << log.time.getminute() << std::endl;
	os << "Second: " << log.time.getsecond() << std::endl;

	os << "Request: " << log.request << std::endl;
	os << "Status: " << log.status << std::endl;
	os << "Bytes: " << log.number_of_bytes << std::endl << std::endl;

	return os;

}

////////////////////////////////////////////////////////// 
// REQUIRES:  The input stream is the stream of an open 
//            file and logs is a valid vector of LogEntrys
// ENSURES: Outputs every LogEntry object to the stream
//
void output_all(std::ostream& out, const std::vector<LogEntry> &logs) {

	for (std::size_t i = 0; i < logs.size(); ++i) {
		out << logs[i];
	}

}

////////////////////////////////////////////////////////// 
// REQUIRES:  The input stream is the stream of an open 
//            file and logs is a valid vector of LogEntrys
// ENSURES:   Prints the host of every LogEntry to the stream
//
void by_host(std::ostream& out, const std::vector<LogEntry> &logs) {

	for (std::size_t i = 0; i < logs.size(); ++i) {
		out << logs[i].gethost() << std::endl;
	}

}

////////////////////////////////////////////////////////// 
// REQUIRES: logs is a valid vector of LogEntrys
// ENSURES:  Prints the total amount of bytes of
//           all the LogEntrys in the vector
//
int byte_count(const std::vector<LogEntry> &logs) {

	int totalBytes = 0;

	for (std::size_t i = 0; i < logs.size(); ++i) {
		totalBytes += logs[i].getbytes();
	}

	return totalBytes;

}

