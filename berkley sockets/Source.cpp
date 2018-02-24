#include"Header.h"
using namespace boost::asio;

int main()
{
	io_service io;
	ip::tcp::socket sock(io);
	ip::tcp::acceptor Listener(io, ip::tcp::endpoint(ip::tcp::v4(), 7777));
	Listener.accept(sock);
	std::cout<<"bytes are coming mafaka : "<<sock.available()<<"\n IP: "<<sock.remote_endpoint().address().to_string()<<"\n port: "<<sock.remote_endpoint().port();
	sock.send(boost::asio::buffer("you have been hacked!!! you pc should be deativated."));
	getchar();
};

