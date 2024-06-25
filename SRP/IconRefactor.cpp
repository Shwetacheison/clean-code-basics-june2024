// Template method design pattern
class Icon
{
    protected:
    float speed, glow, energy;
    int x, y;

    public:
    Icon() { }
    void move() {  }
    void flair() {  }
};

class spinner : public Icon
{
    protected:
    bool clockwise, expand;
    void spin(){ }
    public:
    spinner() : Icon() { }
    void move(){spin();}
    void flair(){spin();}
};

class slider : public Icon
{
    protected:
    bool vertical;
    int distance;
    void slide() { }
    public:
    slider() : Icon() {}
    void move(){slide();}
    void flair(){slide();}
};

class hopper: public Icon
{
    protected:
    bool visible;
    int xcoord, ycoord;
    void hop() {}
    hopper() : Icon() {}
    void move(){hop();}
    void flair(){hop();}

};
