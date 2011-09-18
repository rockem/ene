#include <gmock/gmock.h>
#include <core/clearbuffercommand.h>
#include "mock_textbufferview.h"

namespace CoreTest {

using Core::ClearBufferCommand;

TEST(ClearBufferCommandTest, shouldDelegateClearToView) {
     MockTextBufferView view;
     ClearBufferCommand command(&view);
     EXPECT_CALL(view, clear());

     command.run();
}


}
