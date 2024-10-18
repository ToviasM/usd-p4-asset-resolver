#pragma once
#include <string>
#include "common.h"

class ResolveUser : public ClientUser
{
public:
	ResolveUser() : ClientUser() {}


	void OutputText(const char* data, int length) override;
	int OutputInfo(char level, char* data) override;

	std::string GetTextOutput() { return output; };
	std::string GetInfoOutput() { return output; };

private:
	std::string output;
};