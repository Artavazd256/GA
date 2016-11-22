//
// Created by artavazd on 11/23/16.
//

#ifndef GAVA_GAGAMEMODE_H
#define GAVA_GAGAMEMODE_H



class GAGameMode {
private:
    static GAGameMode * SiGAGameMode;
    GAGameMode();
    GAGameMode(const GAGameMode &);
    GAGameMode operator=(GAGameMode &);

public:
    void HandleResize(int w,int h);
    int WIDTH;
    int HEIGHT;
    char * APPNAME = "GAAva";
    void MainLoop();

public:
    static GAGameMode * GetInstance();

};


#endif //GAVA_GAGAMEMODE_H
