#ifndef TEXTBUFFERVIEW_H
#define TEXTBUFFERVIEW_H

namespace Core {

class TextBufferView {
public:
    virtual ~TextBufferView() {}
    virtual void clear() = 0;
};

}

#endif // TEXTBUFFERVIEW_H
