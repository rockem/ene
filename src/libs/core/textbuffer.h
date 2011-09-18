#ifndef TEXTBUFFER_H
#define TEXTBUFFER_H
#include <boost/shared_ptr.hpp>
#include <core/textbufferview.h>

namespace Core {

class EventBuss;

class TextBuffer
{
    ::boost::shared_ptr<TextBufferView > m_view;
public:
    TextBuffer(::boost::shared_ptr<TextBufferView > view) : m_view(view) {}

    void clear();
};

}
#endif // TEXTBUFFER_H
