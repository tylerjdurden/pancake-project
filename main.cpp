#include "std_lib_facilities_4.h"
#include "Game_window.h"
#include "Graph.h"
#include "GUI.h"

int main()
{
    try 
    {
        Game_window win1(Point(200,200),1000,800,"IHOP Training Program");

        win1.show();
        return gui_main();
    }
    catch(exception& e) {
        cerr << "exception: " << e.what() << '\n';
        return 1;
    }
    catch (...) {
        cerr << "Some exception\n";
        return 2;
    }
}
