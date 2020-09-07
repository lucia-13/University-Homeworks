#ifndef _AREA_H
#define _AREA_H
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

class Area {
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
        virtual double calcPer() const = 0;
	private:
		char color[11];
};
#endif
