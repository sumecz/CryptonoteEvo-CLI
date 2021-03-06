#include "ILogger.hpp"

namespace logging {

const char ILogger::COLOR_PREFIX         = '\x1F';
const char ILogger::COLOR_LETTER_DEFAULT = 'A';

const std::array<std::string, 6> ILogger::LEVEL_NAMES = {{"FATAL", "ERROR", "WARN", "INFO", "DEBUG", "TRACE"}};

std::ostream &operator<<(std::ostream &out, common::console::Color color) {
	return out << std::string{ILogger::COLOR_PREFIX, static_cast<char>(ILogger::COLOR_LETTER_DEFAULT + color)};
}
}
