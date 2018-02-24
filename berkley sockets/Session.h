#pragma once
#include"Header.h"
class Server
{
private:
	boost::asio::io_service io;
public:
	Server(std::string IP);
	void Wait(void);
};