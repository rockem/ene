#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H
#include <core/event.h>
#include <boost/shared_ptr.hpp>

namespace Core {

class EventBuss
{
public:
    EventBuss();

    void raiseEvent(::boost::shared_ptr<Event> e) {}
};

}
#endif // EVENTMANAGER_H
