#include "../include/stypox/scroll_input.hpp"

#include "../include/stypox/scroll_event.hpp"

namespace stypox {
std::vector<ScrollInput*> ScrollInput::m_callbacks{};
void ScrollInput::scrollCallback(GLFWwindow* window, double xOff, double yOff) {
	for (auto&& scrollInput : m_callbacks)
		scrollInput->updateOffset(xOff, yOff);
}


void ScrollInput::updateOffset(double xOff, double yOff) {
	m_xOff += xOff;
	m_yOff += yOff;
}


ScrollInput::ScrollInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier) :
	m_window{window}, m_eventNotifier{eventNotifier},
	m_xOff{0.0}, m_yOff{0.0} {
	m_callbacks.push_back(this);
}
ScrollInput::~ScrollInput() {
	m_callbacks.erase(std::remove(m_callbacks.begin(), m_callbacks.end(), this), m_callbacks.end());
}

void ScrollInput::update() {
	double xCursor, yCursor;
	glfwGetCursorPos(m_window, &xCursor, &yCursor);

	if (m_xOff != 0.0 && m_yOff != 0.0) {
		m_eventNotifier.notify(ScrollEvent{m_xOff, m_yOff, xCursor, yCursor});
		m_xOff = 0.0;
		m_yOff = 0.0;
	}
}
} // namespace stypox