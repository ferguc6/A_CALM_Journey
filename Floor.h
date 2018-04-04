#ifndef FLOOR_H
#define FLOOR_H
class floor{
  protected:
    int flNum; // floor number
    int rmNum; // number of rooms per floor
    bool cmp; // is floor complete?
  public:
    floor(){};
    floor(int, int, bool);
    ~floor(){};

    void setFlNum(int f){flNum = f;}
    void setRmNum(int r){rmNum = r;}
    void setCmp(int c){cmp = c;}

    int getFlNum() const {return flNum;}
    int getRmNum() const {return rmNum;}
    bool getCmp() const {return cmp;}
};


#endif
