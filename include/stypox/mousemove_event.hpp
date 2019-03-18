#ifndef _STYPOX_MOUSEMOVE_EVENT_HPP_
#define _STYPOX_MOUSEMOVE_EVENT_HPP_

namespace stypox {
struct MouseMoveEvent {
	const double xOff, yOff, xPos, yPos;

	constexpr MouseMoveEvent(double xOff, double yOff, double xPos, double yPos) :
		xOff{xOff}, yOff{yOff},
		xPos{xPos}, yPos{yPos} {}
};
} // namespace stypox

#endif // _STYPOX_MOUSEMOVE_EVENT_HPP_