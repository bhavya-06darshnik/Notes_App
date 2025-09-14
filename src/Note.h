//
// Created by psing on 22-08-2025.
//

#ifndef NOTE_H
#define NOTE_H
#include <string>

#endif //NOTE_H

#include <windows.h>
#include <string.h>

using namespace std;


class Note {
private:
    int id;
    string title;
    string content;

public:
    Note (int id, const string& title, const string& content);   //Constructor

    int getId();

    const string& getTitle() const;

    const string& getContent() const;

};


