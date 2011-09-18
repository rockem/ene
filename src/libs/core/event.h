#ifndef EVENT_H
#define EVENT_H
#include <QString>

namespace Core {

class Event {
    QString m_eventType;

public:
    Event(QString eventType) :m_eventType(eventType) {}
};

}


#endif // EVENT_H
