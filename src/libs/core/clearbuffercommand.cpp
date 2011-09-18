#include "clearbuffercommand.h"
#include <core/textbufferview.h>

using namespace Core;

void ClearBufferCommand::run() {
    m_view->clear();
}
