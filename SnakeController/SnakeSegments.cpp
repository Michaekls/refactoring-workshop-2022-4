#include "SnakeSegments.hpp"
#include "SnakeController.hpp"

#include <algorithm>
#include <sstream>

#include "EventT.hpp"
#include "IPort.hpp"

namespace SnakeS
{
class SnakeSegments
{
    void removeTailSegment()
    {
        auto tail = m_segments.back();

        DisplayInd l_evt;
        l_evt.x = tail.x;
        l_evt.y = tail.y;
        l_evt.value = Cell_FREE;
        m_displayPort.send(std::make_unique<EventT<DisplayInd>>(l_evt));

        m_segments.pop_back();
    };

};
}