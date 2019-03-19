#ifndef _STYPOX_SCROLL_INPUT_HPP_
#define _STYPOX_SCROLL_INPUT_HPP_

#include <GLFW/glfw3.h>
#include <stypox/event_notifier.hpp>

namespace stypox {
class ScrollInput {
	static std::map<GLFWwindow*, std::vector<ScrollInput*>> m_callbacks;
	static void scrollCallback(GLFWwindow* window, double xOff, double yOff);

	GLFWwindow* m_window;
	stypox::EventNotifier& m_eventNotifier;

	double m_xOff, m_yOff;

	void updateOffset(double xOff, double yOff);
	void setupCallback();
	void removeCallback();
public:
	ScrollInput(stypox::EventNotifier& eventNotifier, GLFWwindow* window = nullptr);
	~ScrollInput();

	void setWindow(GLFWwindow* window);

	void update();
};
} // namespace stypox

#endif // _STYPOX_SCROLL_INPUT_HPP_