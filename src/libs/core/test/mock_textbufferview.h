#ifndef MOCK_TEXTBUFFERVIEW_H
#define MOCK_TEXTBUFFERVIEW_H
#include <gmock/gmock.h>
#include <core/textbufferview.h>

namespace CoreTest {

class MockTextBufferView : public Core::TextBufferView {
public:
    MOCK_METHOD0(clear, void());
};

}


#endif // MOCK_TEXTBUFFERVIEW_H
