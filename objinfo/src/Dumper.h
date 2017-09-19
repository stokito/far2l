#pragma once
#include <string>
#include <set>

namespace Root
{
	void Commands(std::set<std::string> &out);
	void Query(const std::string &command, const std::string &name, const std::string &result_file);
}

namespace Disasm
{
	void Commands(uint16_t machine, std::set<std::string> &out);
	void Query(uint16_t machine, const std::string &command, const std::string &name, const std::string &result_file);
	void Store(uint16_t machine, const std::string &command, const std::string &name, const std::string &result_file);
}
