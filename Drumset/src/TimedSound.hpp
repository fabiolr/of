//
//  TimedSound.hpp
//  cim594_18_audioout
//
//  Created by Clay Ewing on 2/8/17.
//
//

#ifndef TimedSound_hpp
#define TimedSound_hpp

#include "ofMain.h"

class TimedSound{
    
public:
    
        
    TimedSound();
    virtual ~TimedSound(){};
    
    ofSoundPlayer *sound;
    
    ofVec2f a;
    int position;
    void draw();
    void update();
    bool grabbing(int x, int y);
    void move(int x, int pos);
    void play(int pos);
    void setInitialConditions(int x, int y, int pos);
    
protected:
private:
};

#endif /* TimedSound_hpp */
