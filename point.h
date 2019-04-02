#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
public:
	Point(double x = 0.0, double y = 0.0);
	
	void show() const;
	void translate(double x, double y);
	void rotate(double angle);
	
	friend double distBetween(const Point & p1, const Point & p2);
private:
	double x, y;
};

#endif // POINT_H_INCLUDED
