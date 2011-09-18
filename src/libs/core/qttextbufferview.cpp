#include "qttextbufferview.h"

QT_USE_NAMESPACE

QtTextBufferView::QtTextBufferView(QWidget *parent) :
    QTextEdit(parent)
{
}

void QtTextBufferView::clear() {
    QTextEdit::clear();
}
