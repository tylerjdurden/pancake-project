#include "Window.h"
#include "Graph.h"
#include "GUI.h"
#include "Pancake.h"
#include "std_lib_facilities_4.h"

using namespace Graph_lib;

struct Game_window : public Graph_lib::Window
{
public:
    Game_window(Point xy, int w, int h, const string& title);
private:
    const string name1     = "Juliang Li";
    const string name2     = "Tyler Durden";
    const string game_name = "IHOP Training Program";

    Button splash_next;
    static void cb(Address, Address);
    void next();

    const vector<Text*> texts = {new Text(Point(50,650),game_name), new Text(Point(50,675),name1), new Text(Point(50,700),name2)};
    vector<Pancake*> cakes;
    vector<Button*> buttons;

    Image logo;

};
