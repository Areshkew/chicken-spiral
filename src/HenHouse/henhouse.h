#include <vector>

class HenHouse{
    public:
        enum e_Limits{
            min = 5,
            max = 50
        };

    private:
        std::vector<std::vector<int>> HH;


    public:
        HenHouse(int r, int c) : HH( (r > e_Limits::max || r < e_Limits::min  ? 25 : r),
                                     std::vector<int>( (c > e_Limits::max || r < e_Limits::min ? 25 : r), 0)) { }
        
        void PrintHH();
        void ChickenTrace(unsigned short int &R, unsigned short int &C);
};