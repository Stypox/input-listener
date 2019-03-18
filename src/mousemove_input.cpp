#include "../include/stypox/mousemove_input.hpp"

#include "../include/stypox/mousemove_event.hpp"

namespace stypox {
MouseMoveInput::MouseMoveInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier) :
	m_window{window}, m_eventNotifier{eventNotifier} {}

void MouseMoveInput::update() {
	double xPos, yPos;
	glfwGetCursorPos(m_window, &xPos, &yPos);
	double xOff = xPos - m_lastX,
			yOff = yPos - m_lastY;

	if (xOff != 0.0 && yOff != 0.0) {
		m_eventNotifier.notify(MouseMoveEvent{xOff, yOff, xPos, yPos});
		m_lastX = xPos;
		m_lastY = yPos;
	}
}
} // namespace stypox