#include"Session.h"
Server::Server(std::string IP)
{
	boost::asio::ip::tcp::acceptor Listener(io);
	//Listener.accept()
}