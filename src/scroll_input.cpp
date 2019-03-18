#include "../include/stypox/scroll_input.hpp"

#include "../include/stypox/scroll_event.hpp"

namespace stypox {
std::map<GLFWwindow*, std::vector<ScrollInput*>> ScrollInput::m_callbacks{};
void ScrollInput::scrollCallback(GLFWwindow* window, double xOff, double yOff) {
	for (auto&& scrollInput : m_callbacks[window])
		scrollInput->updateOffset(xOff, yOff);
}


void ScrollInput::updateOffset(double xOff, double yOff) {
	m_xOff += xOff;
	m_yOff += yOff;
}


ScrollInput::ScrollInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier) :
	m_window{window}, m_eventNotifier{eventNotifier},
	m_xOff{0.0}, m_yOff{0.0} {
	m_callbacks[m_window].push_back(this);
	glfwSetScrollCallback(m_window, scrollCallback);
}
ScrollInput::~ScrollInput() {
	auto& windowCallbacks = m_callbacks[m_window];
	windowCallbacks.erase(std::remove(windowCallbacks.begin(), windowCallbacks.end(), this), windowCallbacks.end());
	if (windowCallbacks.empty())
		glfwSetScrollCallback(m_window, nullptr);
}

void ScrollInput::update() {
	double xCursor, yCursor;
	glfwGetCursorPos(m_window, &xCursor, &yCursor);

	if (m_xOff != 0.0 || m_yOff != 0.0) {
		m_eventNotifier.notify(ScrollEvent{m_xOff, m_yOff, xCursor, yCursor});
		m_xOff = 0.0;
		m_yOff = 0.0;
	}
}
} // namespace stypox