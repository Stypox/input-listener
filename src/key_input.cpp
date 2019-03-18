#include "../include/stypox/key_input.hpp"

namespace stypox {
void KeyInput::updateKeysStatus() {
	m_keysStatus[static_cast<size_t>(Key::kb_unknown      )] = glfwGetKey(m_window, GLFW_KEY_UNKNOWN      );
	m_keysStatus[static_cast<size_t>(Key::kb_space        )] = glfwGetKey(m_window, GLFW_KEY_SPACE        );
	m_keysStatus[static_cast<size_t>(Key::kb_apostrophe   )] = glfwGetKey(m_window, GLFW_KEY_APOSTROPHE   );
	m_keysStatus[static_cast<size_t>(Key::kb_comma        )] = glfwGetKey(m_window, GLFW_KEY_COMMA        );
	m_keysStatus[static_cast<size_t>(Key::kb_minus        )] = glfwGetKey(m_window, GLFW_KEY_MINUS        );
	m_keysStatus[static_cast<size_t>(Key::kb_period       )] = glfwGetKey(m_window, GLFW_KEY_PERIOD       );
	m_keysStatus[static_cast<size_t>(Key::kb_slash        )] = glfwGetKey(m_window, GLFW_KEY_SLASH        );
	m_keysStatus[static_cast<size_t>(Key::kb_0            )] = glfwGetKey(m_window, GLFW_KEY_0            );
	m_keysStatus[static_cast<size_t>(Key::kb_1            )] = glfwGetKey(m_window, GLFW_KEY_1            );
	m_keysStatus[static_cast<size_t>(Key::kb_2            )] = glfwGetKey(m_window, GLFW_KEY_2            );
	m_keysStatus[static_cast<size_t>(Key::kb_3            )] = glfwGetKey(m_window, GLFW_KEY_3            );
	m_keysStatus[static_cast<size_t>(Key::kb_4            )] = glfwGetKey(m_window, GLFW_KEY_4            );
	m_keysStatus[static_cast<size_t>(Key::kb_5            )] = glfwGetKey(m_window, GLFW_KEY_5            );
	m_keysStatus[static_cast<size_t>(Key::kb_6            )] = glfwGetKey(m_window, GLFW_KEY_6            );
	m_keysStatus[static_cast<size_t>(Key::kb_7            )] = glfwGetKey(m_window, GLFW_KEY_7            );
	m_keysStatus[static_cast<size_t>(Key::kb_8            )] = glfwGetKey(m_window, GLFW_KEY_8            );
	m_keysStatus[static_cast<size_t>(Key::kb_9            )] = glfwGetKey(m_window, GLFW_KEY_9            );
	m_keysStatus[static_cast<size_t>(Key::kb_semicolon    )] = glfwGetKey(m_window, GLFW_KEY_SEMICOLON    );
	m_keysStatus[static_cast<size_t>(Key::kb_equal        )] = glfwGetKey(m_window, GLFW_KEY_EQUAL        );
	m_keysStatus[static_cast<size_t>(Key::kb_a            )] = glfwGetKey(m_window, GLFW_KEY_A            );
	m_keysStatus[static_cast<size_t>(Key::kb_b            )] = glfwGetKey(m_window, GLFW_KEY_B            );
	m_keysStatus[static_cast<size_t>(Key::kb_c            )] = glfwGetKey(m_window, GLFW_KEY_C            );
	m_keysStatus[static_cast<size_t>(Key::kb_d            )] = glfwGetKey(m_window, GLFW_KEY_D            );
	m_keysStatus[static_cast<size_t>(Key::kb_e            )] = glfwGetKey(m_window, GLFW_KEY_E            );
	m_keysStatus[static_cast<size_t>(Key::kb_f            )] = glfwGetKey(m_window, GLFW_KEY_F            );
	m_keysStatus[static_cast<size_t>(Key::kb_g            )] = glfwGetKey(m_window, GLFW_KEY_G            );
	m_keysStatus[static_cast<size_t>(Key::kb_h            )] = glfwGetKey(m_window, GLFW_KEY_H            );
	m_keysStatus[static_cast<size_t>(Key::kb_i            )] = glfwGetKey(m_window, GLFW_KEY_I            );
	m_keysStatus[static_cast<size_t>(Key::kb_j            )] = glfwGetKey(m_window, GLFW_KEY_J            );
	m_keysStatus[static_cast<size_t>(Key::kb_k            )] = glfwGetKey(m_window, GLFW_KEY_K            );
	m_keysStatus[static_cast<size_t>(Key::kb_l            )] = glfwGetKey(m_window, GLFW_KEY_L            );
	m_keysStatus[static_cast<size_t>(Key::kb_m            )] = glfwGetKey(m_window, GLFW_KEY_M            );
	m_keysStatus[static_cast<size_t>(Key::kb_n            )] = glfwGetKey(m_window, GLFW_KEY_N            );
	m_keysStatus[static_cast<size_t>(Key::kb_o            )] = glfwGetKey(m_window, GLFW_KEY_O            );
	m_keysStatus[static_cast<size_t>(Key::kb_p            )] = glfwGetKey(m_window, GLFW_KEY_P            );
	m_keysStatus[static_cast<size_t>(Key::kb_q            )] = glfwGetKey(m_window, GLFW_KEY_Q            );
	m_keysStatus[static_cast<size_t>(Key::kb_r            )] = glfwGetKey(m_window, GLFW_KEY_R            );
	m_keysStatus[static_cast<size_t>(Key::kb_s            )] = glfwGetKey(m_window, GLFW_KEY_S            );
	m_keysStatus[static_cast<size_t>(Key::kb_t            )] = glfwGetKey(m_window, GLFW_KEY_T            );
	m_keysStatus[static_cast<size_t>(Key::kb_u            )] = glfwGetKey(m_window, GLFW_KEY_U            );
	m_keysStatus[static_cast<size_t>(Key::kb_v            )] = glfwGetKey(m_window, GLFW_KEY_V            );
	m_keysStatus[static_cast<size_t>(Key::kb_w            )] = glfwGetKey(m_window, GLFW_KEY_W            );
	m_keysStatus[static_cast<size_t>(Key::kb_x            )] = glfwGetKey(m_window, GLFW_KEY_X            );
	m_keysStatus[static_cast<size_t>(Key::kb_y            )] = glfwGetKey(m_window, GLFW_KEY_Y            );
	m_keysStatus[static_cast<size_t>(Key::kb_z            )] = glfwGetKey(m_window, GLFW_KEY_Z            );
	m_keysStatus[static_cast<size_t>(Key::kb_left_bracket )] = glfwGetKey(m_window, GLFW_KEY_LEFT_BRACKET );
	m_keysStatus[static_cast<size_t>(Key::kb_backslash    )] = glfwGetKey(m_window, GLFW_KEY_BACKSLASH    );
	m_keysStatus[static_cast<size_t>(Key::kb_right_bracket)] = glfwGetKey(m_window, GLFW_KEY_RIGHT_BRACKET);
	m_keysStatus[static_cast<size_t>(Key::kb_grave_accent )] = glfwGetKey(m_window, GLFW_KEY_GRAVE_ACCENT );
	m_keysStatus[static_cast<size_t>(Key::kb_world_1      )] = glfwGetKey(m_window, GLFW_KEY_WORLD_1      );
	m_keysStatus[static_cast<size_t>(Key::kb_world_2      )] = glfwGetKey(m_window, GLFW_KEY_WORLD_2      );
	m_keysStatus[static_cast<size_t>(Key::kb_escape       )] = glfwGetKey(m_window, GLFW_KEY_ESCAPE       );
	m_keysStatus[static_cast<size_t>(Key::kb_enter        )] = glfwGetKey(m_window, GLFW_KEY_ENTER        );
	m_keysStatus[static_cast<size_t>(Key::kb_tab          )] = glfwGetKey(m_window, GLFW_KEY_TAB          );
	m_keysStatus[static_cast<size_t>(Key::kb_backspace    )] = glfwGetKey(m_window, GLFW_KEY_BACKSPACE    );
	m_keysStatus[static_cast<size_t>(Key::kb_insert       )] = glfwGetKey(m_window, GLFW_KEY_INSERT       );
	m_keysStatus[static_cast<size_t>(Key::kb_delete       )] = glfwGetKey(m_window, GLFW_KEY_DELETE       );
	m_keysStatus[static_cast<size_t>(Key::kb_right        )] = glfwGetKey(m_window, GLFW_KEY_RIGHT        );
	m_keysStatus[static_cast<size_t>(Key::kb_left         )] = glfwGetKey(m_window, GLFW_KEY_LEFT         );
	m_keysStatus[static_cast<size_t>(Key::kb_down         )] = glfwGetKey(m_window, GLFW_KEY_DOWN         );
	m_keysStatus[static_cast<size_t>(Key::kb_up           )] = glfwGetKey(m_window, GLFW_KEY_UP           );
	m_keysStatus[static_cast<size_t>(Key::kb_page_up      )] = glfwGetKey(m_window, GLFW_KEY_PAGE_UP      );
	m_keysStatus[static_cast<size_t>(Key::kb_page_down    )] = glfwGetKey(m_window, GLFW_KEY_PAGE_DOWN    );
	m_keysStatus[static_cast<size_t>(Key::kb_home         )] = glfwGetKey(m_window, GLFW_KEY_HOME         );
	m_keysStatus[static_cast<size_t>(Key::kb_end          )] = glfwGetKey(m_window, GLFW_KEY_END          );
	m_keysStatus[static_cast<size_t>(Key::kb_caps_lock    )] = glfwGetKey(m_window, GLFW_KEY_CAPS_LOCK    );
	m_keysStatus[static_cast<size_t>(Key::kb_scroll_lock  )] = glfwGetKey(m_window, GLFW_KEY_SCROLL_LOCK  );
	m_keysStatus[static_cast<size_t>(Key::kb_num_lock     )] = glfwGetKey(m_window, GLFW_KEY_NUM_LOCK     );
	m_keysStatus[static_cast<size_t>(Key::kb_print_screen )] = glfwGetKey(m_window, GLFW_KEY_PRINT_SCREEN );
	m_keysStatus[static_cast<size_t>(Key::kb_pause        )] = glfwGetKey(m_window, GLFW_KEY_PAUSE        );
	m_keysStatus[static_cast<size_t>(Key::kb_f1           )] = glfwGetKey(m_window, GLFW_KEY_F1           );
	m_keysStatus[static_cast<size_t>(Key::kb_f2           )] = glfwGetKey(m_window, GLFW_KEY_F2           );
	m_keysStatus[static_cast<size_t>(Key::kb_f3           )] = glfwGetKey(m_window, GLFW_KEY_F3           );
	m_keysStatus[static_cast<size_t>(Key::kb_f4           )] = glfwGetKey(m_window, GLFW_KEY_F4           );
	m_keysStatus[static_cast<size_t>(Key::kb_f5           )] = glfwGetKey(m_window, GLFW_KEY_F5           );
	m_keysStatus[static_cast<size_t>(Key::kb_f6           )] = glfwGetKey(m_window, GLFW_KEY_F6           );
	m_keysStatus[static_cast<size_t>(Key::kb_f7           )] = glfwGetKey(m_window, GLFW_KEY_F7           );
	m_keysStatus[static_cast<size_t>(Key::kb_f8           )] = glfwGetKey(m_window, GLFW_KEY_F8           );
	m_keysStatus[static_cast<size_t>(Key::kb_f9           )] = glfwGetKey(m_window, GLFW_KEY_F9           );
	m_keysStatus[static_cast<size_t>(Key::kb_f10          )] = glfwGetKey(m_window, GLFW_KEY_F10          );
	m_keysStatus[static_cast<size_t>(Key::kb_f11          )] = glfwGetKey(m_window, GLFW_KEY_F11          );
	m_keysStatus[static_cast<size_t>(Key::kb_f12          )] = glfwGetKey(m_window, GLFW_KEY_F12          );
	m_keysStatus[static_cast<size_t>(Key::kb_f13          )] = glfwGetKey(m_window, GLFW_KEY_F13          );
	m_keysStatus[static_cast<size_t>(Key::kb_f14          )] = glfwGetKey(m_window, GLFW_KEY_F14          );
	m_keysStatus[static_cast<size_t>(Key::kb_f15          )] = glfwGetKey(m_window, GLFW_KEY_F15          );
	m_keysStatus[static_cast<size_t>(Key::kb_f16          )] = glfwGetKey(m_window, GLFW_KEY_F16          );
	m_keysStatus[static_cast<size_t>(Key::kb_f17          )] = glfwGetKey(m_window, GLFW_KEY_F17          );
	m_keysStatus[static_cast<size_t>(Key::kb_f18          )] = glfwGetKey(m_window, GLFW_KEY_F18          );
	m_keysStatus[static_cast<size_t>(Key::kb_f19          )] = glfwGetKey(m_window, GLFW_KEY_F19          );
	m_keysStatus[static_cast<size_t>(Key::kb_f20          )] = glfwGetKey(m_window, GLFW_KEY_F20          );
	m_keysStatus[static_cast<size_t>(Key::kb_f21          )] = glfwGetKey(m_window, GLFW_KEY_F21          );
	m_keysStatus[static_cast<size_t>(Key::kb_f22          )] = glfwGetKey(m_window, GLFW_KEY_F22          );
	m_keysStatus[static_cast<size_t>(Key::kb_f23          )] = glfwGetKey(m_window, GLFW_KEY_F23          );
	m_keysStatus[static_cast<size_t>(Key::kb_f24          )] = glfwGetKey(m_window, GLFW_KEY_F24          );
	m_keysStatus[static_cast<size_t>(Key::kb_f25          )] = glfwGetKey(m_window, GLFW_KEY_F25          );
	m_keysStatus[static_cast<size_t>(Key::kb_kp0          )] = glfwGetKey(m_window, GLFW_KEY_KP_0         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp1          )] = glfwGetKey(m_window, GLFW_KEY_KP_1         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp2          )] = glfwGetKey(m_window, GLFW_KEY_KP_2         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp3          )] = glfwGetKey(m_window, GLFW_KEY_KP_3         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp4          )] = glfwGetKey(m_window, GLFW_KEY_KP_4         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp5          )] = glfwGetKey(m_window, GLFW_KEY_KP_5         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp6          )] = glfwGetKey(m_window, GLFW_KEY_KP_6         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp7          )] = glfwGetKey(m_window, GLFW_KEY_KP_7         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp8          )] = glfwGetKey(m_window, GLFW_KEY_KP_8         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp9          )] = glfwGetKey(m_window, GLFW_KEY_KP_9         );
	m_keysStatus[static_cast<size_t>(Key::kb_kp_decimal   )] = glfwGetKey(m_window, GLFW_KEY_KP_DECIMAL   );
	m_keysStatus[static_cast<size_t>(Key::kb_kp_divide    )] = glfwGetKey(m_window, GLFW_KEY_KP_DIVIDE    );
	m_keysStatus[static_cast<size_t>(Key::kb_kp_multiply  )] = glfwGetKey(m_window, GLFW_KEY_KP_MULTIPLY  );
	m_keysStatus[static_cast<size_t>(Key::kb_kp_subtract  )] = glfwGetKey(m_window, GLFW_KEY_KP_SUBTRACT  );
	m_keysStatus[static_cast<size_t>(Key::kb_kp_add       )] = glfwGetKey(m_window, GLFW_KEY_KP_ADD       );
	m_keysStatus[static_cast<size_t>(Key::kb_kp_enter     )] = glfwGetKey(m_window, GLFW_KEY_KP_ENTER     );
	m_keysStatus[static_cast<size_t>(Key::kb_kp_equal     )] = glfwGetKey(m_window, GLFW_KEY_KP_EQUAL     );
	m_keysStatus[static_cast<size_t>(Key::kb_left_shift   )] = glfwGetKey(m_window, GLFW_KEY_LEFT_SHIFT   );
	m_keysStatus[static_cast<size_t>(Key::kb_left_control )] = glfwGetKey(m_window, GLFW_KEY_LEFT_CONTROL );
	m_keysStatus[static_cast<size_t>(Key::kb_left_alt     )] = glfwGetKey(m_window, GLFW_KEY_LEFT_ALT     );
	m_keysStatus[static_cast<size_t>(Key::kb_left_super   )] = glfwGetKey(m_window, GLFW_KEY_LEFT_SUPER   );
	m_keysStatus[static_cast<size_t>(Key::kb_right_shift  )] = glfwGetKey(m_window, GLFW_KEY_RIGHT_SHIFT  );
	m_keysStatus[static_cast<size_t>(Key::kb_right_control)] = glfwGetKey(m_window, GLFW_KEY_RIGHT_CONTROL);
	m_keysStatus[static_cast<size_t>(Key::kb_right_alt    )] = glfwGetKey(m_window, GLFW_KEY_RIGHT_ALT    );
	m_keysStatus[static_cast<size_t>(Key::kb_right_super  )] = glfwGetKey(m_window, GLFW_KEY_RIGHT_SUPER  );
	m_keysStatus[static_cast<size_t>(Key::kb_menu         )] = glfwGetKey(m_window, GLFW_KEY_MENU         );

	m_keysStatus[static_cast<size_t>(Key::ms_1)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_1);
	m_keysStatus[static_cast<size_t>(Key::ms_2)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_2);
	m_keysStatus[static_cast<size_t>(Key::ms_3)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_3);
	m_keysStatus[static_cast<size_t>(Key::ms_4)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_4);
	m_keysStatus[static_cast<size_t>(Key::ms_5)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_5);
	m_keysStatus[static_cast<size_t>(Key::ms_6)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_6);
	m_keysStatus[static_cast<size_t>(Key::ms_7)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_7);
	m_keysStatus[static_cast<size_t>(Key::ms_8)] = glfwGetKey(m_window, GLFW_MOUSE_BUTTON_8);
}


void KeyInput::updatePress() {
	for (auto&& key : m_dataPress) {
		if (bool keyState = m_keysStatus[static_cast<size_t>(key.key)]; keyState != key.lastState) {
			if (keyState)
				m_eventNotifier.notify(KeyEvent{KeyEvent::press, key.key, m_xCursor, m_yCursor});
			key.lastState = keyState;
		}
	}
}
void KeyInput::updateDoublePress() {
	for (auto&& key : m_dataDoublePress) {
		if (bool keyState = m_keysStatus[static_cast<size_t>(key.key)]; keyState != key.lastState) {
			if (keyState) {
				if (key.lastPressed + m_doublePressDelay > m_time) {
					m_eventNotifier.notify(KeyEvent{KeyEvent::doublePress, key.key, m_xCursor, m_yCursor});
					key.lastPressed = -3 * m_doublePressDelay;
				}
				else
					key.lastPressed = m_time;
			}
			key.lastState = keyState;
		}
	}
}
void KeyInput::updateRelease() {
	for (auto&& key : m_dataRelease) {
		if (bool keyState = m_keysStatus[static_cast<size_t>(key.key)]; keyState != key.lastState) {
			if (!keyState)
				m_eventNotifier.notify(KeyEvent{KeyEvent::release, key.key, m_xCursor, m_yCursor});
			key.lastState = keyState;
		}
	}
}
void KeyInput::updateLongPress() {
	for (auto&& key : m_dataLongPress) {
		if (bool keyState = m_keysStatus[static_cast<size_t>(key.key)]; keyState != key.lastState) {
			key.lastState = keyState;
			if (keyState)
				key.lastAction = m_time;
		}
		if (key.lastState && key.lastAction + key.delayAfterAction < m_time) {
			m_eventNotifier.notify(KeyEvent{KeyEvent::longPress, key.key, m_xCursor, m_yCursor});
			key.lastAction += key.delayInBetween;
		}
	}
}
void KeyInput::updateLongRelease() {
	for (auto&& key : m_dataLongRelease) {
		if (bool keyState = m_keysStatus[static_cast<size_t>(key.key)]; keyState != key.lastState) {
			key.lastState = keyState;
			if (!keyState)
				key.lastAction = m_time;
		}
		if (!key.lastState && key.lastAction + key.delayAfterAction < m_time) {
			m_eventNotifier.notify(KeyEvent{KeyEvent::longRelease, key.key, m_xCursor, m_yCursor});
			key.lastAction += key.delayInBetween;
		}
	}
}


KeyInput::KeyInput(GLFWwindow*& window, stypox::EventNotifier& eventNotifier, float doublePressDelay) :
	m_window{window}, m_eventNotifier{eventNotifier},
	m_doublePressDelay{doublePressDelay}, m_keysStatus{false} {}


KeyInput& KeyInput::addListener(KeyEvent::Type type, Key key) {
	switch (type) {
	case KeyEvent::Type::press:
		m_dataPress.emplace_back(key);
		break;
	case KeyEvent::Type::release:
		m_dataRelease.emplace_back(key);
		break;
	case KeyEvent::Type::doublePress:
		m_dataDoublePress.emplace_back(key, m_doublePressDelay);
		break;
	}
	return *this;
}
KeyInput& KeyInput::addLongListener(KeyEvent::TypeLong type, Key key, float delayAfterAction, float delayInBetween) {
	switch (type) {
	case KeyEvent::TypeLong::longPress:
		m_dataLongPress.emplace_back(key, delayAfterAction, delayInBetween);
		break;
	case KeyEvent::TypeLong::longRelease:
		m_dataLongRelease.emplace_back(key, delayAfterAction, delayInBetween);
		break;
	}
	return *this;
}


void KeyInput::update() {
	m_time = static_cast<float>(glfwGetTime());
	updateKeysStatus();
	glfwGetCursorPos(m_window, &m_xCursor, &m_yCursor);

	updatePress();
	updateDoublePress();
	updateRelease();
	updateLongPress();
	updateLongRelease();
}
} // namespace stypox