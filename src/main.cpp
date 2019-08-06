﻿//#include "Broadcaster.hpp"
//#include "mediasoupclient.hpp"
//#include <cpr/cpr.h>
//#include <cstdlib>
//#include <iostream>
//#include <signal.h>
//#include <unistd.h>
//
//using json = nlohmann::json;
//
//static Broadcaster broadcaster;
//
//void signalHandler(int signum)
//{
//	std::cout << "Interrupt signal (" << signum << ") received" << std::endl;
//
//	// Remove broadcaster from the server.
//	broadcaster.Stop();
//
//	exit(signum);
//}
//#if 0
//int main(int argc, char* argv[])
//{
//	// Register signal SIGINT and signal handler.
//	signal(SIGINT, signalHandler);
//
//	// Retrieve configuration from environment variables.
//	const char* serverUrl = std::getenv("SERVER_URL");
//	const char* roomId    = std::getenv("ROOM_ID");
//
//	if (serverUrl == nullptr)
//	{
//		std::cout << "missing 'SERVER_URL' environment variable" << std::endl;
//
//		return 1;
//	}
//
//	if (roomId == nullptr)
//	{
//		std::cout << "missing 'ROOM_ID' environment variable" << std::endl;
//
//		return 1;
//	}
//
//	std::string baseUrl = serverUrl;
//	baseUrl.append("/rooms/").append(roomId);
//
//	// Set RTC logging severity to warning.
//	// rtc::LogMessage::LogToDebug(rtc::LoggingSeverity::LS_INFO);
//
//	auto logLevel = mediasoupclient::Logger::LogLevel::LOG_DEBUG;
//	mediasoupclient::Logger::SetLogLevel(logLevel);
//	mediasoupclient::Logger::SetDefaultHandler();
//
//	// Initilize mediasoupclient.
//	mediasoupclient::Initialize();
//
//	std::cout << ">>> welcome to mediasoup broadcaster app!\n" << std::endl;
//
//	std::cout << ">>> verifying that room '" << roomId << "' exists..." << std::endl;
//	auto r = cpr::GetAsync(cpr::Url{ baseUrl }, cpr::VerifySsl(false)).get();
//	if (r.status_code != 200)
//	{
//		std::cout << "unable to retrieve room info"
//		          << ". status code: " << r.status_code << ". body: " << r.text << std::endl;
//
//		return 1;
//	}
////	baseUrl.append("/peerId/").append("111111");
//
//	while(1) {
//
//	r = cpr::Get(cpr::Url{ baseUrl }, cpr::VerifySsl(false));
//	printf("AAAAAAAAAAAAA %d:%s\n", r.status_code, r.text);
//	sleep(1);
//
//	}
//	auto response = nlohmann::json::parse(r.text);
//
//	broadcaster.Start(baseUrl, response);
//
//	std::cout << "thanks for flying libmediasoup broadcaster!" << std::endl;
//
//	return 0;
//}
//#else
//
//#endif
