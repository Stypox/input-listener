#ifndef _STYPOX_KEY_EVENT_HPP_
#define _STYPOX_KEY_EVENT_HPP_

#include <functional>

namespace stypox {
// kb_ --> keyboard (see https://www.glfw.org/docs/latest/group__keys.html)
// ms_ --> mouse (see https://www.glfw.org/docs/latest/group__buttons.html)
enum class Key : unsigned char {
	kb_unknown, kb_space, kb_apostrophe, kb_comma,
	kb_minus, kb_period, kb_slash,

	kb_0, kb_1, kb_2, kb_3,
	kb_4, kb_5, kb_6, kb_7,
	kb_8, kb_9,

	kb_semicolon, kb_equal,

	kb_a, kb_b, kb_c, kb_d,
	kb_e, kb_f, kb_g, kb_h,
	kb_i, kb_j, kb_k, kb_l,
	kb_m, kb_n, kb_o, kb_p,
	kb_q, kb_r, kb_s, kb_t,
	kb_u, kb_v, kb_w, kb_x,
	kb_y, kb_z,

	kb_left_bracket, kb_backslash, kb_right_bracket, kb_grave_accent,
	kb_world_1, kb_world_2, kb_escape, kb_enter,
	kb_tab, kb_backspace, kb_insert, kb_delete,
	kb_right, kb_left, kb_down, kb_up,
	kb_page_up, kb_page_down, kb_home, kb_end,
	kb_caps_lock, kb_scroll_lock, kb_num_lock, kb_print_screen,
	kb_pause,

	kb_f1,  kb_f2,  kb_f3,  kb_f4,
	kb_f5,  kb_f6,  kb_f7,  kb_f8,
	kb_f9,  kb_f10, kb_f11, kb_f12,
	kb_f13, kb_f14, kb_f15, kb_f16,
	kb_f17, kb_f18, kb_f19, kb_f20,
	kb_f21, kb_f22, kb_f23, kb_f24,
	kb_f25,

	kb_kp0, kb_kp1, kb_kp2, kb_kp3,
	kb_kp4, kb_kp5, kb_kp6, kb_kp7,
	kb_kp8, kb_kp9,

	kb_kp_decimal, kb_kp_divide, kb_kp_multiply, kb_kp_subtract,
	kb_kp_add, kb_kp_enter, kb_kp_equal,

	kb_left_shift,  kb_left_control,  kb_left_alt,  kb_left_super,
	kb_right_shift, kb_right_control, kb_right_alt, kb_right_super,

	kb_menu,


	ms_1, ms_2, ms_3, ms_4,
	ms_5, ms_6, ms_7, ms_8,

	ms_left = ms_1,
	ms_right = ms_2,
	ms_middle = ms_3,


	last = ms_8,
	size = last+1,
};

struct KeyEvent {
	enum Type : char {
		press = 0,
		doublePress = 1,
		release = 2,
	};
	enum TypeLong : char {
		longPress = 3,
		longRelease = 4,
	};

	const char type;
	const Key key;
	const double x, y;

	explicit constexpr KeyEvent(char type, Key key) :
		type{type}, key{key},
		x{}, y{} {}
	constexpr KeyEvent(char type, Key key, double x, double y) :
		type{type}, key{key},
		x{x}, y{y} {}
};
} // namespace stypox

namespace std {
template<>
struct hash<stypox::KeyEvent> { size_t operator()(const stypox::KeyEvent& k) {
	return (k.type << 8) | static_cast<int>(k.key);
}};
} // namespace std

#endif // _STYPOX_KEY_EVENT_HPP_