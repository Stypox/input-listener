#ifndef _STYPOX_KEY_INPUT_HPP_
#define _STYPOX_KEY_INPUT_HPP_

#include <GLFW/glfw3.h>
#include <stypox/event_notifier.hpp>

#include "key_event.hpp"

namespace stypox {
class KeyInput {
	struct KeyData {
		const Key key;
		bool lastState;

		constexpr KeyData(Key key) :
			key{key}, lastState{false} {}
	};
	struct KeyDoublePressData {
		const Key key;
		bool lastState;
		float lastPressed;

		constexpr KeyDoublePressData(Key key, float doublePressDelay) :
			key{key}, lastState{false},
			lastPressed{-3 * doublePressDelay} {}
	};
	struct KeyLongData {
		const Key key;
		const float delayAfterAction, delayInBetween;
		bool lastState;
		float lastAction;

		constexpr KeyLongData(Key key, float delayAfterAction, float delayInBetween) :
			key{key}, delayAfterAction{delayAfterAction},
			delayInBetween{delayInBetween}, lastState{false},
			lastAction{0.0f} {}
	};

	GLFWwindow*& m_window;
	stypox::EventNotifier& m_eventNotifier;
	float m_doublePressDelay;

	bool m_keysStatus[static_cast<size_t>(Key::last) + 1];

	std::vector<KeyData> m_dataPress;
	std::vector<KeyDoublePressData> m_dataDoublePress;
	std::vector<KeyData> m_dataRelease;

	std::vector<KeyLongData> m_dataLongPress;
	std::vector<KeyLongData> m_dataLongRelease;

	float m_time;
	double m_xCursor, m_yCursor;

	void updateKeysStatus();

	void updatePress();
	void updateDoublePress();
	void updateRelease();
	void updateLongPress();
	void updateLongRelease();
public:
	KeyInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier, float doublePressDelay);

	inline void setDoublePressDelay(float doublePressDelay) { m_doublePressDelay = doublePressDelay; }

	KeyInput& addListener(KeyEvent::Type type, Key key);
	KeyInput& addLongListener(KeyEvent::TypeLong type, Key key, float delayAfterAction, float delayInBetween);

	void update();

	inline bool isPressed(Key key) { return m_keysStatus[static_cast<size_t>(key)]; };
};
} // namespace stypox

#endif // _STYPOX_KEY_INPUT_HPP_