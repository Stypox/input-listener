#ifndef _STYPOX_MOUSEMOVE_INPUT_HPP_
#define _STYPOX_MOUSEMOVE_INPUT_HPP_

#include <GLFW/glfw3.h>
#include <stypox/event_notifier.hpp>

namespace stypox {
class MouseMoveInput {
	GLFWwindow*& m_window;
	stypox::EventNotifier& m_eventNotifier;

	double m_lastX, m_lastY;
public:
	MouseMoveInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier);

	void update();

	double xPos();
	double yPos();
};
} // namespace stypox

#endif // _STYPOX_MOUSEMOVE_INPUT_HPP_