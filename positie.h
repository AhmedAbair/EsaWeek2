
#ifndef POSITIE_H
#define POSITIE_H
class positie {
public:
	
	positie(int x, int y);
	void move(int dx, int dy);
	int x();
	int y();
private:
	int X;
	int Y;

}; 
#endif
