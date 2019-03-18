#ifndef _STYPOX_SCROLL_INPUT_HPP_
#define _STYPOX_SCROLL_INPUT_HPP_

#include <GLFW/glfw3.h>
#include <stypox/event_notifier.hpp>

namespace stypox {
class ScrollInput {
	static std::vector<ScrollInput*> m_callbacks;
	static void scrollCallback(GLFWwindow* window, double xOff, double yOff);

	GLFWwindow*& m_window;
	stypox::EventNotifier& m_eventNotifier;

	double m_xOff, m_yOff;

	void updateOffset(double xOff, double yOff);
public:
	ScrollInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier);
	~ScrollInput();

	void update();
};
} // namespace stypox

#endif // _STYPOX_SCROLL_INPUT_HPP_