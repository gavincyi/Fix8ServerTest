/* 
 * File:   main.cpp
 * Author: Gavin Chan
 *
 * Created on May 5, 2016, 11:44 AM
 */

#include <UtilLogger.h>

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

	const auto file_path = std::string{"/root/log/"};
	const auto file_name = std::string{"Fix8ServerTest"};
	
	blitzkrieg::UtilLogger::Initialize(file_path, file_name);

	LOG(INFO) << "Starting...";

    return 0;
}

