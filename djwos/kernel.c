#include "include/screen.h"
#include "include/kb.h"
kernelmain(){
    clearScreen();
    while (1)
    {
        print("\nDJWOS>>");

        string ch = readStr();

        if(strEql(ch, "cmd")) {
            clearScreen();
        }
        else if(strEql(ch, "cls")) {
            clearScreen();
        }
        else if(strEql(ch, "help")) {
            print("\nList of commands:\n");
            print("\ncmd: Opens a new shell!\n");
            print("\ncls: Clears the screen!\n");
            print("\ninfo: Shows info about the operating system!\n");
        }
        else if(strEql(ch, "info")) {
            print("\nInfo:\n");
            print("\nOperating System Created by concave_pizza12 2020!\n");
            print("\nYou are running the latest version of djwos.\n");
        }
        else if(strEql(ch, "echo")) {
            print("\n");
            string str = readStr();
            print("\n");
            print(str);
            print("\n");
        }
        else {
            print("\nThis command does not work type help for a list of commands!\n");
        }
        
        print("\n");
    }
}
