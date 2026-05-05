#include <format>
#include <slim/common/log.h>
#include <slim/SlimValue.hpp>

int main() {
    using namespace slim::common;
    log::trace(log::Message{__func__, "Begins", __FILE__, __LINE__});

    slim::SlimValue a = 42;
    log::debug(log::Message{__func__, std::format("a={}", a.to_string()), __FILE__, __LINE__});
    slim::SlimValue b = "gone with the wind";
    log::debug(log::Message{__func__, std::format("b={}", b.to_string()), __FILE__, __LINE__});

    log::trace(log::Message{__func__, "Ends", __FILE__, __LINE__});
    return 0;
}
