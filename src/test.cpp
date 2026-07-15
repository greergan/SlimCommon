#include <slim/common/log.h>

int main() {
    using namespace slim::common;
    log::trace(log::Message{__func__, "Begins", __FILE__, __LINE__});

    log::trace(log::Message{__func__, "Ends", __FILE__, __LINE__});
    return 0;
}
