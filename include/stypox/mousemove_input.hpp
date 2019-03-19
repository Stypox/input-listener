#ifndef _STYPOX_MOUSEMOVE_INPUT_HPP_
#define _STYPOX_MOUSEMOVE_INPUT_HPP_

#include <GLFW/glfw3.h>
#include <stypox/event_notifier.hpp>

namespace stypox {
class MouseMoveInput {
	GLFWwindow* m_window;
	stypox::EventNotifier& m_eventNotifier;

	double m_lastX, m_lastY;
public:
	MouseMoveInput(stypox::EventNotifier& eventNotifier, GLFWwindow* window = nullptr);

	inline void setWindow(GLFWwindow* window) { m_window = window; }

	void update();

	inline double xPos() { return m_lastX; }
	inline double yPos() { return m_lastY; }
};
} // namespace stypox

#endif // _STYPOX_MOUSEMOVE_INPUT_HPP_