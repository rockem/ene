#ifndef CLEARBUFFERCOMMAND_H
#define CLEARBUFFERCOMMAND_H

namespace Core {

class TextBufferView;

class ClearBufferCommand
{
    TextBufferView* m_view;
public:
    ClearBufferCommand(TextBufferView* view) :
        m_view(view) {}

    void run();
};

}

#endif // CLEARBUFFERCOMMAND_H
