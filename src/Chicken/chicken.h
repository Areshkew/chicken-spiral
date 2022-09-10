class Chicken{
    public:
        enum e_facing{
            n, e, s, w
        };

    private:
        e_facing facing;
        unsigned short int p_X;
        unsigned short int p_Y;
        unsigned short int steps;

    public:
        Chicken() : facing(n), p_X(0), p_Y(0), steps(0) { }
        Chicken(e_facing f, int x, int y) : facing(f), p_X(x), p_Y(y), steps(0) { }

        void PrintChicken();
        void ChangeFacing();
        void FootStep();

        unsigned short int getSteps();
        void setSteps(unsigned short int s);

        unsigned short int getX();
        unsigned short int getY();
};