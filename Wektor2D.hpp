class Wektor2D
{
    private:
            double x;
            double y;

    public:
        Wektor2D() { x=0.;  y=0.;}

        Wektor2D(double coordX, double coordY) { 
            x=coordX; 
            y=coordY; 
            }

            void setX(double coordX) { x=coordX; }

            double getX() { return x; }

            void setY(double coordY) { y=coordY; }

            double getY() { return y; }

            Wektor2D operator+(Wektor2D vector){

                Wektor2D v{x+vector.getX(), y+vector.getY() };
                return v;

            }

            double operator*(Wektor2D vectorr){

            return x*vectorr.getX()+y*vectorr.getY();

            }

};