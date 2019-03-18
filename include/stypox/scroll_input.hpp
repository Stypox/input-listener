#ifndef _STYPOX_SCROLL_INPUT_HPP_
#define _STYPOX_SCROLL_INPUT_HPP_

#include <GLFW/glfw3.h>
#include <stypox/event_notifier.hpp>

namespace stypox {
class ScrollInput {
	static void scrollCallback(GLFWwindow* window, double xOffset, double yOffset);

	GLFWwindow*& m_window;
	stypox::EventNotifier& m_eventNotifier;

	double m_xOffset, m_yOffset;

	void updateOffset(double xOffset, double yOffset);
public:
	ScrollInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier);
	~ScrollInput();

	void activateWindowCallback();
	void removeWindowCallback();

	void update();
};
} // namespace stypox

#endif // _STYPOX_SCROLL_INPUT_HPP_