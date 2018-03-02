#include"Header.h"
using namespace boost::asio;

int main()
{
	io_service io;
	ip::tcp::socket sock(io);
	ip::tcp::acceptor Listener(io, ip::tcp::endpoint(ip::tcp::v4(), 7777));
	std::cout << "start lisen"<<std::endl;
	Listener.accept(sock);
	std::cout<<"bytes are coming mafaka : "<<sock.available()<<"\n IP: "<<sock.remote_endpoint().address().to_string()<<"\n port: "<<sock.remote_endpoint().port();
	sock.send(boost::asio::buffer("you have been hacked!!! you pc should be deativated."));
	
	auto Size = sock.available();
	boost::scoped_array<char>Buf(new char[Size]);
	if (Size > 0)
	{
		sock.read_some(boost::asio::buffer(Buf.get(), Size));
	};
	std::string Str(Buf.get(), Size);
	std::cout << Str << std::endl;
	getchar();
};

