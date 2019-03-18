#ifndef _STYPOX_SCROLL_EVENT_HPP_
#define _STYPOX_SCROLL_EVENT_HPP_

namespace stypox {
struct ScrollEvent {
	const double xOff, yOff, xCursor, yCursor;

	constexpr ScrollEvent(double xOff, double yOff, double xCursor, double yCursor) :
		xOff{xOff}, yOff{yOff},
		xCursor{xCursor}, yCursor{yCursor} {}
};
} // namespace stypox

#endif // _STYPOX_SCROLL_EVENT_HPP_