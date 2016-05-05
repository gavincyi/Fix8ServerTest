/* 
 * File:   main.cpp
 * Author: Gavin Chan
 *
 * Created on May 5, 2016, 11:44 AM
 */
#include <fix8/f8includes.hpp>
#include <fix8/usage.hpp>
#include <fix8/session.hpp>
#include "fix_types.hpp"
#include "fix_router.hpp"
#include "fix_classes.hpp"
#include "fix_session.hpp"
#include <UtilLogger.h>
#include <cstdlib>

using namespace std;
using namespace FIX8;

/*
 * 
 */
int main(int argc, char** argv) {

	const auto file_path = std::string{"/root/log/"};
	const auto file_name = std::string{"Fix8ServerTest"};
	
	blitzkrieg::UtilLogger::Initialize(file_path, file_name);

	LOG(INFO) << "Starting...";

	// Start fix8 server
	if (argc != 2)
	{
		LOG(WARNING) << "Arguments must be larger than 2";
		return 0;
	}

	if (strcmp("server", argv[1]) == 0)
	{
		auto server = 
			new FIX8::ServerSession<fix_session_server>(FIX8::FIXT1100::ctx(),
														"/root/Downloads/fix8-1.3.4/test/hf_server.xml",
														"TEX1");

		LOG(INFO) << "Fix server is initialized";

		while (true)
		{
			if (!server->poll())
			{
				continue;
			}

			LOG(INFO) << "Polled!";

			auto inst =
				new SessionInstance<fix_session_server>(*server);
			inst->start(true);
			inst->stop();
		}
	} 
	else if (strcmp("client", argv[1]) == 0) 
	{
		auto client = 
			new FIX8::ClientSession<fix_session_client>(FIX8::FIXT1100::ctx(),
														"/root/Downloads/fix8-1.3.4/test/hf_client.xml",
														"DLD1");

		LOG(INFO) << "Fix server is initialized";

		client->start(true, 0 ,0);
	}
	else
	{
		LOG(WARNING) << "Cannot recognize the mode : " << argv[1];
	}

	LOG(INFO) << "Process killed";

    return 0;
}

