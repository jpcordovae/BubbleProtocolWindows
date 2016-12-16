// BubbleProtocolWindows.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <iostream>

#include "../../BubbleProtocol/bubble.h"
#include "../../BubbleProtocol/tcp_client.hpp"
#include "../../BubbleProtocol/tcp_service.hpp"

#define DEBUG

int main(int argc, char *argv[])
{
	boost::asio::io_service io_service;
	server s(io_service, 5409);
	try
	{
		io_service.run();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

