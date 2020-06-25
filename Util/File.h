//
// Created by Swung 0x48 on 2020/6/24.
//

#ifndef LIBRARYMANAGER_FILE_H
#define LIBRARYMANAGER_FILE_H
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include "../Books/Book.h"

using namespace std;

class File
{
private:
    fstream _fs;
public:
    static string BookPath;
    static string UserPath;
    static string LogPath;
//    static string GetBookPath() { return BookPath; }
//    static string GetUserPath() { return UserPath; }
//    static string GetLogPath() { return LogPath; }

    fstream& Open(const string& path, string mode);
    void Close();

    template<class T>
    void SaveAll(fstream& fs, vector<T> vec)
    {
        for (auto i: vec)
        {
            fs << i;
        }
        fs.close();
    }

    template<class T1, class T2>
            void SaveAll(fstream &fs, map<T1, T2> map)
    {
        for (auto i: map)
        {
            fs << i.first << " " << i.second << endl;
        }
        fs.close();
    }

    template<class T>
            void LoadAll(fstream& fs, vector<T>& vec)
    {
        string str;
        while (getline(fs, str))
        {
            if (!str.empty())
            {
                istringstream ss(str);
                T item;
                ss >> item;
                vec.push_back(item);
            }
        }
        fs.close();
    }

    template<class T1, class T2>
            void LoadAll(fstream &fs, map<T1, T2> map)
    {
        string str;
        while (getline(fs, str))
        {
            istringstream ss(str);
            T1 first; T2 second;
            ss >> first >> second;
            map[first] += second;   // TODO: Debug
        }
    }
// TODO: Check for Language book.

};


#endif //LIBRARYMANAGER_FILE_H
