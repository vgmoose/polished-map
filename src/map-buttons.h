#ifndef MAP_BUTTONS_H
#define MAP_BUTTONS_H

#pragma warning(push, 0)
#include <FL/Fl_Radio_Button.H>
#include <FL/Fl_Box.H>
#pragma warning(pop)

#include "utils.h"
#include "widgets.h"

class Metatile_Button : public Fl_Radio_Button {
private:
	uint8_t _id;
public:
	Metatile_Button(int x, int y, int s, uint8_t id);
	inline uint8_t id(void) const { return _id; }
	void id(uint8_t id);
	void draw(void);
	int handle(int event);
};

class Block : public Fl_Box {
private:
	uint8_t _row, _col;
	uint8_t _id;
public:
	Block(int x = 0, int y = 0, int s = 0, uint8_t row = 0, uint8_t col = 0, uint8_t id = 0);
	inline uint8_t row(void) const { return _row; }
	inline uint8_t col(void) const { return _col; }
	inline void coords(uint8_t row, uint8_t col) { _row = row; _col = col; }
	inline uint8_t id(void) const { return _id; }
	inline void id(uint8_t id) { _id = id; update_label(); }
	inline bool right_half(void) const { return Fl::event_x() >= x() + w() / 2; }
	inline bool bottom_half(void) const { return Fl::event_y() >= y() + h() / 2; }
	void update_label(void);
	void draw(void);
	int handle(int event);
};

class Tile_Button : public Fl_Radio_Button {
private:
	uint8_t _id;
public:
	Tile_Button(int x, int y, int s, uint8_t id);
	inline uint8_t id(void) const { return _id; }
	inline void id(uint8_t id) { _id = id; }
	void draw(void);
};

class Chip : public Fl_Box {
private:
	uint8_t _row, _col;
	uint8_t _id;
public:
	Chip(int x = 0, int y = 0, int s = 0, uint8_t row = 0, uint8_t col = 0, uint8_t id = 0);
	inline uint8_t row(void) const { return _row; }
	inline uint8_t col(void) const { return _col; }
	inline void coords(uint8_t row, uint8_t col) { _row = row; _col = col; }
	inline uint8_t id(void) const { return _id; }
	inline void id(uint8_t id) { _id = id; }
	void draw(void);
	int handle(int event);
};

#endif
