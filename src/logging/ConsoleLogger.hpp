#pragma once

#include <mutex>
#include "CommonLogger.hpp"

namespace logging {

class ConsoleLogger : public CommonLogger {
public:
	ConsoleLogger(Level level = DEBUGGING);

protected:
	virtual void do_log_string(const std::string &message) override;

private:
	static std::mutex mutex;  // we can have 2 console loggers, for WalletNode and Node
};
}
