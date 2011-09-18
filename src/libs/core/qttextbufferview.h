#ifndef QTTEXTBUFFERVIEW_H
#define QTTEXTBUFFERVIEW_H
#include <QTextEdit>
#include <core/textbufferview.h>

QT_BEGIN_NAMESPACE

class QtTextBufferView : public QTextEdit, public Core::TextBufferView
{
    Q_OBJECT
public:
    explicit QtTextBufferView(QWidget *parent = 0);

    void clear();

signals:

public slots:

};

QT_END_NAMESPACE

#endif // QTTEXTBUFFERVIEW_H
